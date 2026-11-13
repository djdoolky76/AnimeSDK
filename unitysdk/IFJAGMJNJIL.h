#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace Sofa::Core { class SimpleCommand; }
namespace System { class Action; }

#define IFJAGMJNJIL_ADD_EXITHANDLER_OFFSET UNITYSDK_OFFSET(0x1BC16BD0)
#define IFJAGMJNJIL_BGCONAMFDOO_OFFSET UNITYSDK_OFFSET(0x1BC16C90)
#define IFJAGMJNJIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC16DB0)
#define IFJAGMJNJIL_GET_WORKSHOPLEVEL_OFFSET UNITYSDK_OFFSET(0x1BC16B70)
#define IFJAGMJNJIL_JBCCBPBBAIJ_OFFSET UNITYSDK_OFFSET(0x1BC16D50)
#define IFJAGMJNJIL_OKHHHGFGOLD_OFFSET UNITYSDK_OFFSET(0x1BC16B90)
#define IFJAGMJNJIL_REMOVE_EXITHANDLER_OFFSET UNITYSDK_OFFSET(0x1BC16C30)
#define IFJAGMJNJIL_SET_WORKSHOPLEVEL_OFFSET UNITYSDK_OFFSET(0x1BC16B80)

inline static constexpr unsigned int IFJAGMJNJIL_TypeDefinitionIndex = 82556;

	class IFJAGMJNJIL : public ::System::Object
	{
	public:
		::Sofa::Core::SimpleCommand* FGHLGECDPMB; // 0x10
		::System::Action* ExitHandler; // 0x18
		::System::UInt32 _WorkshopLevel_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJAGMJNJIL_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_WorkshopLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJAGMJNJIL_GET_WORKSHOPLEVEL_OFFSET))(this);
		}

		::System::Void set_WorkshopLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFJAGMJNJIL_SET_WORKSHOPLEVEL_OFFSET))(this, a1);
		}

		::System::Int32 OKHHHGFGOLD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJAGMJNJIL_OKHHHGFGOLD_OFFSET))(this);
		}

		::System::Void add_ExitHandler(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IFJAGMJNJIL_ADD_EXITHANDLER_OFFSET))(this, a1);
		}

		::System::Void remove_ExitHandler(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IFJAGMJNJIL_REMOVE_EXITHANDLER_OFFSET))(this, a1);
		}

		::CEEGMMCFCBG* BGCONAMFDOO()
		{
			return ((::CEEGMMCFCBG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJAGMJNJIL_BGCONAMFDOO_OFFSET))(this);
		}

		::System::Void JBCCBPBBAIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJAGMJNJIL_JBCCBPBBAIJ_OFFSET))(this);
		}

	};
