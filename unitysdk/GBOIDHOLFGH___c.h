#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBOIDHOLFGH;
namespace System { class Object; }

#define GBOIDHOLFGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC54530)
#define GBOIDHOLFGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC54570)
#define GBOIDHOLFGH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FC54580)

inline static constexpr unsigned int GBOIDHOLFGH___c_TypeDefinitionIndex = 28981;

	class GBOIDHOLFGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBOIDHOLFGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBOIDHOLFGH___C_CTOR_OFFSET))(this);
		}

		::GBOIDHOLFGH* __cctor_b__23_0()
		{
			return ((::GBOIDHOLFGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBOIDHOLFGH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
