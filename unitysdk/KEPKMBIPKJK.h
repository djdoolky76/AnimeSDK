#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ILKICKDDECB;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define KEPKMBIPKJK_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0x19947940)
#define KEPKMBIPKJK_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x19947C40)
#define KEPKMBIPKJK_DJACPFIONDE_OFFSET UNITYSDK_OFFSET(0x19947DD0)
#define KEPKMBIPKJK_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x19947F70)
#define KEPKMBIPKJK_NFLFPBLBFMK_OFFSET UNITYSDK_OFFSET(0x199479D0)
#define KEPKMBIPKJK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19947770)
#define KEPKMBIPKJK__CTOR_OFFSET UNITYSDK_OFFSET(0x199476F0)

inline static constexpr unsigned int KEPKMBIPKJK_TypeDefinitionIndex = 84035;

class KEPKMBIPKJK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::ILKICKDDECB*>* EAONHFBOKNM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPKMBIPKJK__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPKMBIPKJK_PHOADBJGFBE_OFFSET))(this);
	}

	::KEPKMBIPKJK* ANPBCLAFCJB(::ILKICKDDECB* FMJAFFDJMBB)
	{
		return ((::KEPKMBIPKJK*(*)(::PVOID, ::ILKICKDDECB*))((::PBYTE)hIl2Cpp + KEPKMBIPKJK_ANPBCLAFCJB_OFFSET))(this, FMJAFFDJMBB);
	}

	::ILKICKDDECB* NFLFPBLBFMK(::UnityEngine::Animation* AOKJEGNBALI)
	{
		return ((::ILKICKDDECB*(*)(::PVOID, ::UnityEngine::Animation*))((::PBYTE)hIl2Cpp + KEPKMBIPKJK_NFLFPBLBFMK_OFFSET))(this, AOKJEGNBALI);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPKMBIPKJK_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void DJACPFIONDE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEPKMBIPKJK_DJACPFIONDE_OFFSET))(this);
	}

	::System::Boolean FLHNGDLANDC(::ILKICKDDECB* FMJAFFDJMBB)
	{
		return ((::System::Boolean(*)(::PVOID, ::ILKICKDDECB*))((::PBYTE)hIl2Cpp + KEPKMBIPKJK_FLHNGDLANDC_OFFSET))(this, FMJAFFDJMBB);
	}
};
