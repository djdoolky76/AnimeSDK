#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFPPOLOMLKN;
namespace System { class Object; }

#define LFPPOLOMLKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E948260)
#define LFPPOLOMLKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E948290)
#define LFPPOLOMLKN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E9482A0)

inline static constexpr unsigned int LFPPOLOMLKN___c_TypeDefinitionIndex = 25569;

	class LFPPOLOMLKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D4F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFPPOLOMLKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPPOLOMLKN___C_CTOR_OFFSET))(this);
		}

		::LFPPOLOMLKN* __cctor_b__28_0()
		{
			return ((::LFPPOLOMLKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPPOLOMLKN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
