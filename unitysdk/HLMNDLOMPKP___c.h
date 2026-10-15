#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLMNDLOMPKP;
namespace System { class Object; }

#define HLMNDLOMPKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E595530)
#define HLMNDLOMPKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E595570)
#define HLMNDLOMPKP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E595580)

inline static constexpr unsigned int HLMNDLOMPKP___c_TypeDefinitionIndex = 25087;

	class HLMNDLOMPKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLMNDLOMPKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMNDLOMPKP___C_CTOR_OFFSET))(this);
		}

		::HLMNDLOMPKP* __cctor_b__38_0()
		{
			return ((::HLMNDLOMPKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLMNDLOMPKP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
