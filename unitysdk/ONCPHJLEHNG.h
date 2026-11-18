#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ONCPHJLEHNG_FJAMJHBKLFJ;

#define ONCPHJLEHNG_APCLBECBFOG_OFFSET UNITYSDK_OFFSET(0xFD960B0)
#define ONCPHJLEHNG_CLHJOGHEOID_OFFSET UNITYSDK_OFFSET(0xFD95E40)
#define ONCPHJLEHNG_FJDCKKMGNHB_OFFSET UNITYSDK_OFFSET(0xFD96570)
#define ONCPHJLEHNG_JNBHEBKDCNO_OFFSET UNITYSDK_OFFSET(0xFD96CC0)

inline static constexpr unsigned int ONCPHJLEHNG_TypeDefinitionIndex = 84843;

class ONCPHJLEHNG : public ::System::Object
{
public:
	// static const ::System::Single PCGDHMFNNMN; // 0x0
	// static const ::System::Single DKBJPBJGMGD; // 0x0
	// static const ::System::Single DBFAJKIKKGO; // 0x0
	// static const ::System::Single KGFPNHDDKOH; // 0x0
	// static const ::System::Single LNKGHNADNML; // 0x0
	// static const ::System::Single FMAGHPHMEJL; // 0x0
	// static const ::System::Single EFDPALNNHBI; // 0x0
	// static const ::System::Single DGAGONFAIOE; // 0x0

	static ::System::Boolean CLHJOGHEOID(::UnityEngine::Vector3& CKPGOKHECCH)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + ONCPHJLEHNG_CLHJOGHEOID_OFFSET))(CKPGOKHECCH);
	}

	static ::System::Boolean APCLBECBFOG(::UnityEngine::Vector3& IACKHFCLPJI, ::System::Int32 LIMNECOMDOM)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + ONCPHJLEHNG_APCLBECBFOG_OFFSET))(IACKHFCLPJI, LIMNECOMDOM);
	}

	static ::ONCPHJLEHNG_FJAMJHBKLFJ* FJDCKKMGNHB(::System::Int32 KMMGKJPAOMF, ::System::Int32 OLAHFMECDAI, ::UnityEngine::Vector3 IACKHFCLPJI, ::UnityEngine::Vector3 JLNIFKHFEFB)
	{
		return ((::ONCPHJLEHNG_FJAMJHBKLFJ*(*)(::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ONCPHJLEHNG_FJDCKKMGNHB_OFFSET))(KMMGKJPAOMF, OLAHFMECDAI, IACKHFCLPJI, JLNIFKHFEFB);
	}

	static ::System::Single JNBHEBKDCNO(::Il2CppArray<::UnityEngine::Vector3>* GLHGOPJOEBF)
	{
		return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + ONCPHJLEHNG_JNBHEBKDCNO_OFFSET))(GLHGOPJOEBF);
	}
};
