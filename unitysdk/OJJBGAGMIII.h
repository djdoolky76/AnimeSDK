#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"

class GDJAILOIBIM;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OJJBGAGMIII_HNEAGGGILAC_OFFSET UNITYSDK_OFFSET(0x12936340)
#define OJJBGAGMIII_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x129360F0)
#define OJJBGAGMIII_MBJLMADLENM_OFFSET UNITYSDK_OFFSET(0x12936400)
#define OJJBGAGMIII_NDMHBIMEPCP_OFFSET UNITYSDK_OFFSET(0x12936550)
#define OJJBGAGMIII__CCTOR_OFFSET UNITYSDK_OFFSET(0x12936060)

inline static constexpr unsigned int OJJBGAGMIII_TypeDefinitionIndex = 79811;

class OJJBGAGMIII : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::GDJAILOIBIM*>** StaticGet_DLJLEGKBMAG()
	{
		return (::System::Collections::Generic::List_1<::GDJAILOIBIM*>**)Il2CppClass::FromTypeDefinitionIndex(OJJBGAGMIII_TypeDefinitionIndex)->GetStaticField(0x4C8C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJJBGAGMIII__CCTOR_OFFSET))();
	}

	static ::System::Void KKFNPONHGEM(::GDJAILOIBIM* HINEJHJDICB)
	{
		return ((::System::Void(*)(::GDJAILOIBIM*))((::PBYTE)hIl2Cpp + OJJBGAGMIII_KKFNPONHGEM_OFFSET))(HINEJHJDICB);
	}

	static ::System::Void HNEAGGGILAC(::GDJAILOIBIM* HINEJHJDICB)
	{
		return ((::System::Void(*)(::GDJAILOIBIM*))((::PBYTE)hIl2Cpp + OJJBGAGMIII_HNEAGGGILAC_OFFSET))(HINEJHJDICB);
	}

	static ::System::Boolean MBJLMADLENM(::System::String*& MCOHLHMKLIP)
	{
		return ((::System::Boolean(*)(::System::String*&))((::PBYTE)hIl2Cpp + OJJBGAGMIII_MBJLMADLENM_OFFSET))(MCOHLHMKLIP);
	}

	static ::MoleMole::Config::GuidePoint_AutoGenStrategy NDMHBIMEPCP(::System::String* JGHJDCPILBI)
	{
		return ((::MoleMole::Config::GuidePoint_AutoGenStrategy(*)(::System::String*))((::PBYTE)hIl2Cpp + OJJBGAGMIII_NDMHBIMEPCP_OFFSET))(JGHJDCPILBI);
	}
};
