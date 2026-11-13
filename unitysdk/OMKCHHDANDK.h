#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECIIEBFKNMJ;
class KAKADGHNMFK;
class LMJPODEEGKK;

#define OMKCHHDANDK_CTOR_OFFSET UNITYSDK_OFFSET(0x17D57660)
#define OMKCHHDANDK_DHMJMEBEBNB_OFFSET UNITYSDK_OFFSET(0x17D576C0)
#define OMKCHHDANDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17D57670)
#define OMKCHHDANDK_KCPHPAKEMMM_OFFSET UNITYSDK_OFFSET(0x17D579F0)
#define OMKCHHDANDK_OCOHIPAMJOP_OFFSET UNITYSDK_OFFSET(0x17D57CB0)
#define OMKCHHDANDK_PKOOKGMELGG_OFFSET UNITYSDK_OFFSET(0x17D57740)

inline static constexpr unsigned int OMKCHHDANDK_TypeDefinitionIndex = 80151;

	class OMKCHHDANDK : public ::System::Object
	{
	public:
		::LMJPODEEGKK* FKINCGODJEP; // 0x10
		::ECIIEBFKNMJ* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::LMJPODEEGKK* a1, ::ECIIEBFKNMJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + OMKCHHDANDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKCHHDANDK_DISPOSE_OFFSET))(this);
		}

		::System::Void DHMJMEBEBNB(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + OMKCHHDANDK_DHMJMEBEBNB_OFFSET))(this, a1);
		}

		::System::Void PKOOKGMELGG(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + OMKCHHDANDK_PKOOKGMELGG_OFFSET))(this, a1);
		}

		::System::Void KCPHPAKEMMM(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + OMKCHHDANDK_KCPHPAKEMMM_OFFSET))(this, a1);
		}

		::System::Void OCOHIPAMJOP(::KAKADGHNMFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + OMKCHHDANDK_OCOHIPAMJOP_OFFSET))(this, a1);
		}

	};
