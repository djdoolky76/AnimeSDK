#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OBKOICBFAFP_CGEEAAKBBBN_OFFSET UNITYSDK_OFFSET(0xE0E6820)
#define OBKOICBFAFP_HFPMEFOKJFG_OFFSET UNITYSDK_OFFSET(0xE0E6B20)
#define OBKOICBFAFP_LFGHJLMJOIB_1_OFFSET UNITYSDK_OFFSET(0xE0E66E0)
#define OBKOICBFAFP_LFGHJLMJOIB_OFFSET UNITYSDK_OFFSET(0xE0E65A0)

inline static constexpr unsigned int OBKOICBFAFP_TypeDefinitionIndex = 42357;

class OBKOICBFAFP : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>* LFGHJLMJOIB(::BPHGNMNLLHF* JNNLPBBEIEM)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + OBKOICBFAFP_LFGHJLMJOIB_OFFSET))(JNNLPBBEIEM);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* LFGHJLMJOIB_1(::MoleMole::InLevelAvatarDataItem* FNNEPOPLLFB)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::MoleMole::InLevelAvatarDataItem*))((::PBYTE)hIl2Cpp + OBKOICBFAFP_LFGHJLMJOIB_1_OFFSET))(FNNEPOPLLFB);
	}

	static ::System::Void CGEEAAKBBBN(::System::Int32 NBAIGFIOAOC, ::System::Int32& BPAKHJJHAJK, ::System::Int32& NDJCCNEAFJN, ::System::Int32& EHMPHHMDHLL, ::System::Int32& CKMDPNIDDFM)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + OBKOICBFAFP_CGEEAAKBBBN_OFFSET))(NBAIGFIOAOC, BPAKHJJHAJK, NDJCCNEAFJN, EHMPHHMDHLL, CKMDPNIDDFM);
	}

	static ::System::Int32 HFPMEFOKJFG(::System::Int32 PHMHPKGBDEC)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + OBKOICBFAFP_HFPMEFOKJFG_OFFSET))(PHMHPKGBDEC);
	}
};
