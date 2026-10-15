#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALOLLLFPILL;
namespace System { class Object; }

#define ALOLLLFPILL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4E80C0)
#define ALOLLLFPILL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E8100)
#define ALOLLLFPILL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E4E8110)

inline static constexpr unsigned int ALOLLLFPILL___c_TypeDefinitionIndex = 32197;

	class ALOLLLFPILL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALOLLLFPILL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOLLLFPILL___C_CTOR_OFFSET))(this);
		}

		::ALOLLLFPILL* __cctor_b__23_0()
		{
			return ((::ALOLLLFPILL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOLLLFPILL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
