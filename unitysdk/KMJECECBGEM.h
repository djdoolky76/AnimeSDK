#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKFNPNFDPFM.h"
#include "unitysdk/FBPMKEOJKNN.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KMJECECBGEM_BFMIGJKPMGP_OFFSET UNITYSDK_OFFSET(0x16129940)
#define KMJECECBGEM_CFMNMKLNOHJ_OFFSET UNITYSDK_OFFSET(0x16129530)
#define KMJECECBGEM_CIOCEADMLDB_OFFSET UNITYSDK_OFFSET(0x161296A0)
#define KMJECECBGEM_DBMMIDCDKEC_OFFSET UNITYSDK_OFFSET(0x16129890)
#define KMJECECBGEM_DENCFKMGCJG_OFFSET UNITYSDK_OFFSET(0x161294D0)
#define KMJECECBGEM_HBGKHHLIBBM_OFFSET UNITYSDK_OFFSET(0x16129710)
#define KMJECECBGEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16129100)
#define KMJECECBGEM__CTOR_OFFSET UNITYSDK_OFFSET(0x161290F0)

inline static constexpr unsigned int KMJECECBGEM_TypeDefinitionIndex = 9176;

class KMJECECBGEM : public ::JKFNPNFDPFM
{
public:
	::System::Void _ctor(::FBPMKEOJKNN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FBPMKEOJKNN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KMJECECBGEM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJECECBGEM_TOSTRING_OFFSET))(this);
	}

	::System::String* CFMNMKLNOHJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJECECBGEM_CFMNMKLNOHJ_OFFSET))(this);
	}

	::System::Boolean DBMMIDCDKEC(::System::String*& HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + KMJECECBGEM_DBMMIDCDKEC_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Boolean BFMIGJKPMGP(::System::String*& HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + KMJECECBGEM_BFMIGJKPMGP_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Boolean CIOCEADMLDB(::System::String*& HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + KMJECECBGEM_CIOCEADMLDB_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Boolean HBGKHHLIBBM(::System::String*& HMMMOCJAEOA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + KMJECECBGEM_HBGKHHLIBBM_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::String* DENCFKMGCJG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJECECBGEM_DENCFKMGCJG_OFFSET))(this);
	}
};
