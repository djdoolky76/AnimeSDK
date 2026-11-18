#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AGFLLIBLPKH.h"
#include "unitysdk/GBLMFIBAPCP.h"

class NKHOMMGFIFO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CBIGDIBCHIA_APEDLPPECLN_OFFSET UNITYSDK_OFFSET(0x15311390)
#define CBIGDIBCHIA_BFBLACAOPNA_OFFSET UNITYSDK_OFFSET(0x15311960)
#define CBIGDIBCHIA_FDPGHNMMIPN_OFFSET UNITYSDK_OFFSET(0x15312120)
#define CBIGDIBCHIA_LBHLEKDALOH_OFFSET UNITYSDK_OFFSET(0x15311610)
#define CBIGDIBCHIA_NJDDGFONABB_OFFSET UNITYSDK_OFFSET(0x15311C00)
#define CBIGDIBCHIA_NOFANODJNEA_OFFSET UNITYSDK_OFFSET(0x15311EA0)

inline static constexpr unsigned int CBIGDIBCHIA_TypeDefinitionIndex = 60071;

class CBIGDIBCHIA : public ::System::Object
{
public:
	// static const ::System::Int32 JPEJCPAGPLG = 0x0; // 0x0
	// static const ::System::Int32 FDOLOLIPCIO = 0x1; // 0x0
	// static const ::System::Int32 MGDJONFOJHG = 0x2; // 0x0
	// static const ::System::Int32 IHAMNFIBABK = 0x3; // 0x0

	static ::System::Boolean APEDLPPECLN(::System::Int32 BEIOAFIOABC, ::GBLMFIBAPCP& BEFLKPKFJEE)
	{
		return ((::System::Boolean(*)(::System::Int32, ::GBLMFIBAPCP&))((::PBYTE)hIl2Cpp + CBIGDIBCHIA_APEDLPPECLN_OFFSET))(BEIOAFIOABC, BEFLKPKFJEE);
	}

	static ::System::String* BFBLACAOPNA(::System::Int32 BEIOAFIOABC)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CBIGDIBCHIA_BFBLACAOPNA_OFFSET))(BEIOAFIOABC);
	}

	static ::System::Boolean NJDDGFONABB(::System::Int32 BEIOAFIOABC, ::System::String* KGCMOBGBILN)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CBIGDIBCHIA_NJDDGFONABB_OFFSET))(BEIOAFIOABC, KGCMOBGBILN);
	}

	static ::System::Collections::Generic::List_1<::NKHOMMGFIFO*>* LBHLEKDALOH(::System::Int32 BEIOAFIOABC, ::System::String* KGCMOBGBILN)
	{
		return ((::System::Collections::Generic::List_1<::NKHOMMGFIFO*>*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CBIGDIBCHIA_LBHLEKDALOH_OFFSET))(BEIOAFIOABC, KGCMOBGBILN);
	}

	static ::System::Boolean NOFANODJNEA(::System::Int32 BEIOAFIOABC)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CBIGDIBCHIA_NOFANODJNEA_OFFSET))(BEIOAFIOABC);
	}

	static ::System::Void FDPGHNMMIPN(::System::Int32 OCDNJEKPAMB, ::AGFLLIBLPKH& DMGJLMKFOOM)
	{
		return ((::System::Void(*)(::System::Int32, ::AGFLLIBLPKH&))((::PBYTE)hIl2Cpp + CBIGDIBCHIA_FDPGHNMMIPN_OFFSET))(OCDNJEKPAMB, DMGJLMKFOOM);
	}
};
