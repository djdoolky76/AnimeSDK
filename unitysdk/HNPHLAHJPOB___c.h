#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNPHLAHJPOB;
namespace System { class Object; }

#define HNPHLAHJPOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20038E70)
#define HNPHLAHJPOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20038EB0)
#define HNPHLAHJPOB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20038EC0)

inline static constexpr unsigned int HNPHLAHJPOB___c_TypeDefinitionIndex = 30201;

	class HNPHLAHJPOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D4A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNPHLAHJPOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPHLAHJPOB___C_CTOR_OFFSET))(this);
		}

		::HNPHLAHJPOB* __cctor_b__28_0()
		{
			return ((::HNPHLAHJPOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPHLAHJPOB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
