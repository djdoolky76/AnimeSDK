#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EEAEDCHDLBK;
namespace IFix::Core { class VirtualMachine; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JMMMAMBCMBN_AAOGBMEPLGF_OFFSET UNITYSDK_OFFSET(0x1A47DDC0)
#define JMMMAMBCMBN_BNDAIDMHBLI_OFFSET UNITYSDK_OFFSET(0x1A47D4F0)
#define JMMMAMBCMBN_CMBOCJLFDBL_OFFSET UNITYSDK_OFFSET(0x1A47D6F0)
#define JMMMAMBCMBN_COOBGIDDNBG_OFFSET UNITYSDK_OFFSET(0x1A47DD10)
#define JMMMAMBCMBN_KFFNIKHIMCN_OFFSET UNITYSDK_OFFSET(0x1A47D690)
#define JMMMAMBCMBN_LAOBMHPJMOF_OFFSET UNITYSDK_OFFSET(0x1A47D490)
#define JMMMAMBCMBN_OIMEBPGMJKJ_OFFSET UNITYSDK_OFFSET(0x1A47DE60)
#define JMMMAMBCMBN_PAGAFBNMMHH_OFFSET UNITYSDK_OFFSET(0x1A47DE20)
#define JMMMAMBCMBN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A47CFB0)
#define JMMMAMBCMBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47CFA0)

inline static constexpr unsigned int JMMMAMBCMBN_TypeDefinitionIndex = 65907;

class JMMMAMBCMBN : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_DFFPDBCPEIL()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JMMMAMBCMBN_TypeDefinitionIndex)->GetStaticField(0x44490);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet__LDAOAAECHLL_k__BackingField()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(JMMMAMBCMBN_TypeDefinitionIndex)->GetStaticField(0x44498);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMMAMBCMBN__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMMMAMBCMBN__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* LAOBMHPJMOF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)())((::PBYTE)hIl2Cpp + JMMMAMBCMBN_LAOBMHPJMOF_OFFSET))();
	}

	static ::System::Void BNDAIDMHBLI()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMMMAMBCMBN_BNDAIDMHBLI_OFFSET))();
	}

	static ::System::Void KFFNIKHIMCN(::IFix::Core::VirtualMachine* AHKCKEGJFOJ)
	{
		return ((::System::Void(*)(::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + JMMMAMBCMBN_KFFNIKHIMCN_OFFSET))(AHKCKEGJFOJ);
	}

	static ::System::Void CMBOCJLFDBL()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMMMAMBCMBN_CMBOCJLFDBL_OFFSET))();
	}

	static ::System::Void AAOGBMEPLGF(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + JMMMAMBCMBN_AAOGBMEPLGF_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::String* PAGAFBNMMHH()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + JMMMAMBCMBN_PAGAFBNMMHH_OFFSET))();
	}

	static ::System::Boolean OIMEBPGMJKJ(::EEAEDCHDLBK* JFPDJGAMELP)
	{
		return ((::System::Boolean(*)(::EEAEDCHDLBK*))((::PBYTE)hIl2Cpp + JMMMAMBCMBN_OIMEBPGMJKJ_OFFSET))(JFPDJGAMELP);
	}

	static ::System::String* COOBGIDDNBG()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + JMMMAMBCMBN_COOBGIDDNBG_OFFSET))();
	}
};
