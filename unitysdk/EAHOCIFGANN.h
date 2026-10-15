#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SyncCheckItemBase.h"
namespace System { class String; }

#define EAHOCIFGANN_CTOR_OFFSET UNITYSDK_OFFSET(0x126754D0)
#define EAHOCIFGANN_GET_ISTICKABLE_OFFSET UNITYSDK_OFFSET(0x126753D0)
#define EAHOCIFGANN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x12675460)
#define EAHOCIFGANN__DOCHECKIMPL_OFFSET UNITYSDK_OFFSET(0x126753E0)

inline static constexpr unsigned int EAHOCIFGANN_TypeDefinitionIndex = 59874;

	class EAHOCIFGANN : public ::RPG::Client::SyncCheckItemBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHOCIFGANN_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsTickable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHOCIFGANN_GET_ISTICKABLE_OFFSET))(this);
		}

		::System::Boolean _DoCheckImpl()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHOCIFGANN__DOCHECKIMPL_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAHOCIFGANN_TOSTRING_OFFSET))(this);
		}

	};
