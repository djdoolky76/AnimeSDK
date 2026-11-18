#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_CHBBAFJIOEH_OFFSET UNITYSDK_OFFSET(0xFD45A40)
#define NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_MFHMGEJFFEF_OFFSET UNITYSDK_OFFSET(0xFD458D0)
#define NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_NDGBBMMOGNC_OFFSET UNITYSDK_OFFSET(0xFD45990)
#define NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_PIADJCGOGFK_OFFSET UNITYSDK_OFFSET(0xFD456D0)
#define NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE__CCTOR_OFFSET UNITYSDK_OFFSET(0xFD456B0)
#define NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE__CTOR_OFFSET UNITYSDK_OFFSET(0xFD455F0)

inline static constexpr unsigned int NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_TypeDefinitionIndex = 59312;

class NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE : public ::System::Object
{
public:
	static ::System::Single* StaticGet_FELCKOAHCAH()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_TypeDefinitionIndex)->GetStaticField(0x13650);
	}
	static ::System::Single* StaticGet_ENKNOFDJBGJ()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_TypeDefinitionIndex)->GetStaticField(0x13654);
	}
	static ::System::Int32* StaticGet_EGFMAACOBEI()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_TypeDefinitionIndex)->GetStaticField(0x13658);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* GIJKANPOKBD; // 0x10
	::System::Int32 GDIDPEIICMF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE__CCTOR_OFFSET))();
	}

	::System::Boolean PIADJCGOGFK(::System::Int32 DFPJIBPFIKM, ::UnityEngine::Vector3 JLNIFKHFEFB, ::System::Single HDKFMIAEAGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_PIADJCGOGFK_OFFSET))(this, DFPJIBPFIKM, JLNIFKHFEFB, HDKFMIAEAGP);
	}

	::System::Void MFHMGEJFFEF(::System::Int32 DFPJIBPFIKM, ::UnityEngine::Vector3 JLNIFKHFEFB, ::System::Single BMHMFIODCNO, ::System::Int32 LOEGDCGHLOB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_MFHMGEJFFEF_OFFSET))(this, DFPJIBPFIKM, JLNIFKHFEFB, BMHMFIODCNO, LOEGDCGHLOB);
	}

	::System::Void NDGBBMMOGNC(::System::Int32 EMLKPPDAGLK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_NDGBBMMOGNC_OFFSET))(this, EMLKPPDAGLK);
	}

	::System::Int32 CHBBAFJIOEH(::System::Int32 DFPJIBPFIKM)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_KOIEGDOKOFE_CHBBAFJIOEH_OFFSET))(this, DFPJIBPFIKM);
	}
};
