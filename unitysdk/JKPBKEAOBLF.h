#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ResourceFileType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace MoleMole::Config { class AssetIndexContainer; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define JKPBKEAOBLF_BOJFNEJAAFI_OFFSET UNITYSDK_OFFSET(0x13AD5CA0)
#define JKPBKEAOBLF_CPIAFMNAAEE_OFFSET UNITYSDK_OFFSET(0x13AD6D40)
#define JKPBKEAOBLF_INCNCJNNOGK_OFFSET UNITYSDK_OFFSET(0x13AD57D0)
#define JKPBKEAOBLF_IPEPMFNIPMA_OFFSET UNITYSDK_OFFSET(0x13AD5570)
#define JKPBKEAOBLF_JBEJMDHEFNO_OFFSET UNITYSDK_OFFSET(0x13AD5510)
#define JKPBKEAOBLF_JPNGIAOINHK_OFFSET UNITYSDK_OFFSET(0x13AD6AB0)
#define JKPBKEAOBLF_LJKOCPDGIMA_OFFSET UNITYSDK_OFFSET(0x13AD5220)
#define JKPBKEAOBLF_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x13AD6FB0)
#define JKPBKEAOBLF_MGCLIJJLBLG_OFFSET UNITYSDK_OFFSET(0x13AD5970)
#define JKPBKEAOBLF_NIABMLLBODP_OFFSET UNITYSDK_OFFSET(0x13AD54B0)
#define JKPBKEAOBLF_OACOHIHMJBP_OFFSET UNITYSDK_OFFSET(0x13AD5190)
#define JKPBKEAOBLF__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AD7000)
#define JKPBKEAOBLF__CTOR_OFFSET UNITYSDK_OFFSET(0x13AD6FF0)

inline static constexpr unsigned int JKPBKEAOBLF_TypeDefinitionIndex = 85054;

class JKPBKEAOBLF : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::Foundation::ResourceFileType>** StaticGet_DBNBKAHLOKK()
	{
		return (::System::Collections::Generic::HashSet_1<::Foundation::ResourceFileType>**)Il2CppClass::FromTypeDefinitionIndex(JKPBKEAOBLF_TypeDefinitionIndex)->GetStaticField(0x51B20);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPBKEAOBLF__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKPBKEAOBLF__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::HashSet_1<::Foundation::ResourceFileType>* OACOHIHMJBP()
	{
		return ((::System::Collections::Generic::HashSet_1<::Foundation::ResourceFileType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPBKEAOBLF_OACOHIHMJBP_OFFSET))(this);
	}

	::System::Void LJKOCPDGIMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPBKEAOBLF_LJKOCPDGIMA_OFFSET))(this);
	}

	::System::Boolean NIABMLLBODP(::System::Boolean& DEBDHGGGGCM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + JKPBKEAOBLF_NIABMLLBODP_OFFSET))(this, DEBDHGGGGCM);
	}

	::System::Boolean INCNCJNNOGK(::Foundation::ResourceFileType OBNIAHNMHPF, ::System::Boolean LJIFFIFAIJL, ::System::Boolean& DOFMEBGMNLK)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + JKPBKEAOBLF_INCNCJNNOGK_OFFSET))(this, OBNIAHNMHPF, LJIFFIFAIJL, DOFMEBGMNLK);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt64>* CPIAFMNAAEE()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPBKEAOBLF_CPIAFMNAAEE_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPBKEAOBLF_LJMIPGJJELP_OFFSET))(this);
	}

	static ::System::Boolean JPNGIAOINHK(::MoleMole::Config::AssetIndexContainer*& GCAFOPAKCIL)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::AssetIndexContainer*&))((::PBYTE)hIl2Cpp + JKPBKEAOBLF_JPNGIAOINHK_OFFSET))(GCAFOPAKCIL);
	}

	::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::MoleMole::Config::AssetIndexContainer*> MGCLIJJLBLG(::Foundation::ResourceFileType OBNIAHNMHPF, ::System::Boolean LJIFFIFAIJL)
	{
		return ((::System::ValueTuple_3<::System::Boolean, ::System::Boolean, ::MoleMole::Config::AssetIndexContainer*>(*)(::PVOID, ::Foundation::ResourceFileType, ::System::Boolean))((::PBYTE)hIl2Cpp + JKPBKEAOBLF_MGCLIJJLBLG_OFFSET))(this, OBNIAHNMHPF, LJIFFIFAIJL);
	}

	::System::Boolean IPEPMFNIPMA(::System::Boolean LJIFFIFAIJL, ::System::Boolean& DEBDHGGGGCM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean&))((::PBYTE)hIl2Cpp + JKPBKEAOBLF_IPEPMFNIPMA_OFFSET))(this, LJIFFIFAIJL, DEBDHGGGGCM);
	}

	static ::System::Void BOJFNEJAAFI(::MoleMole::Config::AssetIndexContainer*& GCAFOPAKCIL, ::Foundation::ResourceFileType OBNIAHNMHPF, ::System::Boolean CKPDHEIDDMH)
	{
		return ((::System::Void(*)(::MoleMole::Config::AssetIndexContainer*&, ::Foundation::ResourceFileType, ::System::Boolean))((::PBYTE)hIl2Cpp + JKPBKEAOBLF_BOJFNEJAAFI_OFFSET))(GCAFOPAKCIL, OBNIAHNMHPF, CKPDHEIDDMH);
	}

	::System::Boolean JBEJMDHEFNO(::System::Boolean& DEBDHGGGGCM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + JKPBKEAOBLF_JBEJMDHEFNO_OFFSET))(this, DEBDHGGGGCM);
	}
};
