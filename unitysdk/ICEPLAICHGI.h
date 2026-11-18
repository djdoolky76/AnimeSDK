#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIPCMLEONLI.h"

namespace System::Collections { class IEnumerator; }
namespace System::Reflection { class FieldInfo; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class WaitForSeconds; }

#define ICEPLAICHGI_BEEEFFHAOHB_OFFSET UNITYSDK_OFFSET(0x141B7F70)
#define ICEPLAICHGI_FBIJHJOOFEG_OFFSET UNITYSDK_OFFSET(0x141B8200)
#define ICEPLAICHGI_FENPLGEJDLF_OFFSET UNITYSDK_OFFSET(0x141B8000)
#define ICEPLAICHGI_JIMINDMGCHE_OFFSET UNITYSDK_OFFSET(0x141B8280)
#define ICEPLAICHGI_OIJGAOIHCMN_OFFSET UNITYSDK_OFFSET(0x141B81B0)
#define ICEPLAICHGI__CCTOR_OFFSET UNITYSDK_OFFSET(0x141B8130)
#define ICEPLAICHGI__CTOR_OFFSET UNITYSDK_OFFSET(0x141B7E70)

inline static constexpr unsigned int ICEPLAICHGI_TypeDefinitionIndex = 79073;

class ICEPLAICHGI : public ::GIPCMLEONLI
{
public:
	static ::System::Reflection::FieldInfo** StaticGet_CHEIBNPBKNL()
	{
		return (::System::Reflection::FieldInfo**)Il2CppClass::FromTypeDefinitionIndex(ICEPLAICHGI_TypeDefinitionIndex)->GetStaticField(0x49DF0);
	}
	::System::Collections::IEnumerator* EELHICINOAE; // 0x40
	::System::Single KJHHMLJPDJO; // 0x48

	::System::Void _ctor(::System::Collections::IEnumerator* NCHEALMACAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + ICEPLAICHGI__CTOR_OFFSET))(this, NCHEALMACAA);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICEPLAICHGI__CCTOR_OFFSET))();
	}

	::System::Void FENPLGEJDLF(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICEPLAICHGI_FENPLGEJDLF_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Single OIJGAOIHCMN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ICEPLAICHGI_OIJGAOIHCMN_OFFSET))(this);
	}

	::System::Collections::IEnumerator* BEEEFFHAOHB(::System::Collections::IEnumerator* LBDDOMFAJMK)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + ICEPLAICHGI_BEEEFFHAOHB_OFFSET))(this, LBDDOMFAJMK);
	}

	static ::System::Collections::IEnumerator* FBIJHJOOFEG(::UnityEngine::AsyncOperation* OPNHFPJHINB)
	{
		return ((::System::Collections::IEnumerator*(*)(::UnityEngine::AsyncOperation*))((::PBYTE)hIl2Cpp + ICEPLAICHGI_FBIJHJOOFEG_OFFSET))(OPNHFPJHINB);
	}

	static ::System::Collections::IEnumerator* JIMINDMGCHE(::UnityEngine::WaitForSeconds* NMCODLFGFED)
	{
		return ((::System::Collections::IEnumerator*(*)(::UnityEngine::WaitForSeconds*))((::PBYTE)hIl2Cpp + ICEPLAICHGI_JIMINDMGCHE_OFFSET))(NMCODLFGFED);
	}
};
