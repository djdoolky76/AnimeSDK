#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJONKGINHC.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define IABPBNADEOL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1A38A6C0)
#define IABPBNADEOL_CHNGCIIBBKN_OFFSET UNITYSDK_OFFSET(0x1A389890)
#define IABPBNADEOL_DBJAMFHNCMP_OFFSET UNITYSDK_OFFSET(0x1A38A550)
#define IABPBNADEOL_GFNGNNACCEH_OFFSET UNITYSDK_OFFSET(0x1A38A7F0)
#define IABPBNADEOL_HBJCIHPDFHF_OFFSET UNITYSDK_OFFSET(0x1A38A810)
#define IABPBNADEOL_HKBKBELIMLF_OFFSET UNITYSDK_OFFSET(0x1A3898D0)
#define IABPBNADEOL_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x1A38A620)
#define IABPBNADEOL_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x1A38A800)
#define IABPBNADEOL_PJDLNAFAPKB_OFFSET UNITYSDK_OFFSET(0x1A38A7C0)
#define IABPBNADEOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A38A6B0)

inline static constexpr unsigned int IABPBNADEOL_TypeDefinitionIndex = 61769;

class IABPBNADEOL : public ::HDJONKGINHC
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* ECINNIPPCNM; // 0x78
	::System::Boolean PJKJDHPIKGI; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABPBNADEOL__CTOR_OFFSET))(this);
	}

	::System::Void CHNGCIIBBKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABPBNADEOL_CHNGCIIBBKN_OFFSET))(this);
	}

	::System::Void HKBKBELIMLF(::UnityEngine::Material* KNNDDLMOKCG, ::UnityEngine::Vector4 KJFIDGNOACA, ::UnityEngine::Vector4 CPEDEGGHHLM, ::System::Boolean FIAMNAGMOLA, ::System::Boolean LIFHAEBEJFH, ::System::Boolean DMFKNIBAJME)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IABPBNADEOL_HKBKBELIMLF_OFFSET))(this, KNNDDLMOKCG, KJFIDGNOACA, CPEDEGGHHLM, FIAMNAGMOLA, LIFHAEBEJFH, DMFKNIBAJME);
	}

	::System::Boolean DBJAMFHNCMP(::UnityEngine::Vector4 KGGJCGPMAIH, ::UnityEngine::Vector4 BPEGDPLGFPO, ::System::Byte JIBIDDCCHIF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Byte))((::PBYTE)hIl2Cpp + IABPBNADEOL_DBJAMFHNCMP_OFFSET))(this, KGGJCGPMAIH, BPEGDPLGFPO, JIBIDDCCHIF);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABPBNADEOL_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::Il2CppArray<::System::Object*>* ODDPBBMAFDD)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + IABPBNADEOL_BBOMJDBNHIC_OFFSET))(this, ODDPBBMAFDD);
	}

	::System::Boolean PJDLNAFAPKB(::UnityEngine::Vector4 MIALFKCCCPI, ::UnityEngine::Vector4 KMGKAIDEIBA, ::System::Byte FDHMCIFPNCK)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Byte))((::PBYTE)hIl2Cpp + IABPBNADEOL_PJDLNAFAPKB_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void GFNGNNACCEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABPBNADEOL_GFNGNNACCEH_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABPBNADEOL_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void HBJCIHPDFHF(::UnityEngine::Material* MIALFKCCCPI, ::UnityEngine::Vector4 KMGKAIDEIBA, ::UnityEngine::Vector4 FDHMCIFPNCK, ::System::Boolean MPBJAGIKPJM, ::System::Boolean DDMDINPGCFI, ::System::Boolean CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IABPBNADEOL_HBJCIHPDFHF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}
};
