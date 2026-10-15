#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
class ECIAICDLAHO;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JPBFIGPHAKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC7ADE0)
#define JPBFIGPHAKA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC7A9C0)
#define JPBFIGPHAKA_FDMNDEDEDOD_OFFSET UNITYSDK_OFFSET(0x1EC7A510)
#define JPBFIGPHAKA_KPCNDNEGCAH_OFFSET UNITYSDK_OFFSET(0x1EC7AD20)
#define JPBFIGPHAKA_MJHHKHMLEEE_OFFSET UNITYSDK_OFFSET(0x1EC7A870)

	class JPBFIGPHAKA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Object*>* CCECMIKFAME; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFIGPHAKA_CTOR_OFFSET))(this);
		}

		::System::Void FDMNDEDEDOD(::ECIAICDLAHO* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ECIAICDLAHO*, ::System::Object*))((::PBYTE)hIl2Cpp + JPBFIGPHAKA_FDMNDEDEDOD_OFFSET))(this, a1, a2);
		}

		::System::Object* MJHHKHMLEEE(::ECIAICDLAHO* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::ECIAICDLAHO*))((::PBYTE)hIl2Cpp + JPBFIGPHAKA_MJHHKHMLEEE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFIGPHAKA_DISPOSE_OFFSET))(this);
		}

		::System::String* KPCNDNEGCAH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPBFIGPHAKA_KPCNDNEGCAH_OFFSET))(this);
		}

	};
