#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIJOKMHJKLJ;
namespace System { class String; }

#define HPBFDMEFOPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EC1EBA0)
#define HPBFDMEFOPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC1EAB0)
#define HPBFDMEFOPI_EEOFKMJDJMF_OFFSET UNITYSDK_OFFSET(0x1EC1EDF0)
#define HPBFDMEFOPI_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0x1EC1ED40)
#define HPBFDMEFOPI_MNJOCIFNCFK_OFFSET UNITYSDK_OFFSET(0x1EC1ED60)
#define HPBFDMEFOPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EC1ED80)

inline static constexpr unsigned int HPBFDMEFOPI_TypeDefinitionIndex = 44035;

	class HPBFDMEFOPI : public ::System::Object
	{
	public:
		::OIJOKMHJKLJ* HDKGNBDOBBB; // 0x10
		::System::Boolean PMKMJCILCEM; // 0x18
		::System::Boolean EENJINGIFEP; // 0x19
		::System::Boolean INJJGMIGFFD; // 0x1A
		::System::Void _ctor(::OIJOKMHJKLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*))((::PBYTE)hIl2Cpp + HPBFDMEFOPI_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::OIJOKMHJKLJ* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + HPBFDMEFOPI_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBFDMEFOPI_KEOKEELBKHI_OFFSET))(this);
		}

		::System::Boolean MNJOCIFNCFK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBFDMEFOPI_MNJOCIFNCFK_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBFDMEFOPI_TOSTRING_OFFSET))(this);
		}

		::System::Void EEOFKMJDJMF(::OIJOKMHJKLJ* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::OIJOKMHJKLJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + HPBFDMEFOPI_EEOFKMJDJMF_OFFSET))(this, a1, a2);
		}

	};
