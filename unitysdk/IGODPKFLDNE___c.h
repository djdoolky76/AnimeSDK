#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGODPKFLDNE;
namespace System { class Object; }

#define IGODPKFLDNE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E654540)
#define IGODPKFLDNE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E654580)
#define IGODPKFLDNE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E654590)

inline static constexpr unsigned int IGODPKFLDNE___c_TypeDefinitionIndex = 33058;

	class IGODPKFLDNE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGODPKFLDNE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGODPKFLDNE___C_CTOR_OFFSET))(this);
		}

		::IGODPKFLDNE* __cctor_b__23_0()
		{
			return ((::IGODPKFLDNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGODPKFLDNE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
