#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJCIINILEJA;
class JADKMHKLDGN;
class JKLMMFFKNFH;
class NPECKAJCCAH;
class OOBCBPNPOLG;
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class IList; }

#define LHBDMLAPLLP_CFGMEFOKIEM_OFFSET UNITYSDK_OFFSET(0xB69DDD0)
#define LHBDMLAPLLP_CGLACGGDGLP_OFFSET UNITYSDK_OFFSET(0xB69DF40)
#define LHBDMLAPLLP_CLEAR_OFFSET UNITYSDK_OFFSET(0xB69DBF0)
#define LHBDMLAPLLP_CTOR_OFFSET UNITYSDK_OFFSET(0xB69E010)
#define LHBDMLAPLLP_DEBIBFEPLIK_OFFSET UNITYSDK_OFFSET(0xB69DFC0)
#define LHBDMLAPLLP_DENOJDPJKJD_OFFSET UNITYSDK_OFFSET(0xB69DE70)
#define LHBDMLAPLLP_GCFPICNDPJK_OFFSET UNITYSDK_OFFSET(0xB69DEF0)
#define LHBDMLAPLLP_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0xB69DCA0)

inline static constexpr unsigned int LHBDMLAPLLP_TypeDefinitionIndex = 73370;

	class LHBDMLAPLLP : public ::System::Object
	{
	public:
		::NPECKAJCCAH* PJBJJONNHJL; // 0x10
		::BJCIINILEJA* LFBHFLOOKCC; // 0x18
		::JKLMMFFKNFH* HLHMANFLFEP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBDMLAPLLP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBDMLAPLLP_CLEAR_OFFSET))(this);
		}

		::System::Object* GetContext(::System::Type* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + LHBDMLAPLLP_GETCONTEXT_OFFSET))(this, a1);
		}

		::System::Void CFGMEFOKIEM(::System::Collections::IList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IList*))((::PBYTE)hIl2Cpp + LHBDMLAPLLP_CFGMEFOKIEM_OFFSET))(this, a1);
		}

		::System::Void DENOJDPJKJD(::OOBCBPNPOLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOBCBPNPOLG*))((::PBYTE)hIl2Cpp + LHBDMLAPLLP_DENOJDPJKJD_OFFSET))(this, a1);
		}

		::System::Void GCFPICNDPJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBDMLAPLLP_GCFPICNDPJK_OFFSET))(this);
		}

		::System::Void CGLACGGDGLP(::JADKMHKLDGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JADKMHKLDGN*))((::PBYTE)hIl2Cpp + LHBDMLAPLLP_CGLACGGDGLP_OFFSET))(this, a1);
		}

		::System::Void DEBIBFEPLIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBDMLAPLLP_DEBIBFEPLIK_OFFSET))(this);
		}

	};
