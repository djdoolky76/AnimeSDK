#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class HFKFMKJBGBJ;
class NIPAAHJFNBJ;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class IHECGHKOIPM_1;
template <typename T> class LJHFMILANJA_1;

#define JJLMFJEPEJM_AJNLHLCGPBE_OFFSET UNITYSDK_OFFSET(0x18A22760)
#define JJLMFJEPEJM_DLFAJKHIOIE_OFFSET UNITYSDK_OFFSET(0x18A21DC0)
#define JJLMFJEPEJM_EAOFNOLGMFG_OFFSET UNITYSDK_OFFSET(0x18A22140)
#define JJLMFJEPEJM_EHCFEPIEBBM_OFFSET UNITYSDK_OFFSET(0x18A22E00)
#define JJLMFJEPEJM_HDHINACHMFJ_OFFSET UNITYSDK_OFFSET(0x18A22B70)
#define JJLMFJEPEJM_HFDMLENACNC_OFFSET UNITYSDK_OFFSET(0x18A22040)
#define JJLMFJEPEJM_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x18A21E20)
#define JJLMFJEPEJM_IDBEBPOAIEE_OFFSET UNITYSDK_OFFSET(0x18A224D0)
#define JJLMFJEPEJM_OLAMEEGOCHF_OFFSET UNITYSDK_OFFSET(0x18A21F30)
#define JJLMFJEPEJM_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x18A21B70)
#define JJLMFJEPEJM__CTOR_OFFSET UNITYSDK_OFFSET(0x18A21CF0)

inline static constexpr unsigned int JJLMFJEPEJM_TypeDefinitionIndex = 77751;

class JJLMFJEPEJM : public ::JJEJBPGJPJN
{
public:
	::IHECGHKOIPM_1<::System::Int32>* KEHECMCDLFC; // 0x88
	::LJHFMILANJA_1<::System::UInt32>* CJHCCIAEBNP; // 0x90
	::IHECGHKOIPM_1<::System::Int32>* LGNHMFKHPLD; // 0x98
	::LJHFMILANJA_1<::System::Boolean>* IHGADKJABCF; // 0xA0
	::IHECGHKOIPM_1<::System::Int32>* IKOFJEHPPAN; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* LALKBKBODFH; // 0xB0
	::LJHFMILANJA_1<::System::UInt32>* OCOJFKMOKMK; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLMFJEPEJM__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLMFJEPEJM_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Boolean DLFAJKHIOIE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLMFJEPEJM_DLFAJKHIOIE_OFFSET))(this);
	}

	::System::Boolean OLAMEEGOCHF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLMFJEPEJM_OLAMEEGOCHF_OFFSET))(this);
	}

	::System::Int32 HFDMLENACNC(::HFKFMKJBGBJ* DEKJDEPKKLH)
	{
		return ((::System::Int32(*)(::PVOID, ::HFKFMKJBGBJ*))((::PBYTE)hIl2Cpp + JJLMFJEPEJM_HFDMLENACNC_OFFSET))(this, DEKJDEPKKLH);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLMFJEPEJM_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Int32 EAOFNOLGMFG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLMFJEPEJM_EAOFNOLGMFG_OFFSET))(this);
	}

	::System::Int32 IDBEBPOAIEE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLMFJEPEJM_IDBEBPOAIEE_OFFSET))(this);
	}

	::System::Int32 AJNLHLCGPBE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLMFJEPEJM_AJNLHLCGPBE_OFFSET))(this);
	}

	::System::Int32 HDHINACHMFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJLMFJEPEJM_HDHINACHMFJ_OFFSET))(this);
	}

	::System::Void EHCFEPIEBBM(::NIPAAHJFNBJ* PLBEAIIJADM)
	{
		return ((::System::Void(*)(::PVOID, ::NIPAAHJFNBJ*))((::PBYTE)hIl2Cpp + JJLMFJEPEJM_EHCFEPIEBBM_OFFSET))(this, PLBEAIIJADM);
	}
};
