#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONJNHGNCEOE;
namespace System { class Object; }

#define ONJNHGNCEOE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC2E8A0)
#define ONJNHGNCEOE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC2E8E0)
#define ONJNHGNCEOE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC2E8F0)

inline static constexpr unsigned int ONJNHGNCEOE___c_TypeDefinitionIndex = 28569;

	class ONJNHGNCEOE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONJNHGNCEOE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJNHGNCEOE___C_CTOR_OFFSET))(this);
		}

		::ONJNHGNCEOE* __cctor_b__28_0()
		{
			return ((::ONJNHGNCEOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONJNHGNCEOE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
