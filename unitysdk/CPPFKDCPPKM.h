#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class Assembly; }

#define CPPFKDCPPKM_AIEOINEIMGB_OFFSET UNITYSDK_OFFSET(0x193EF120)
#define CPPFKDCPPKM_EEMIMLEJPME_OFFSET UNITYSDK_OFFSET(0x193EF1C0)
#define CPPFKDCPPKM_IDBOFEENHJI_OFFSET UNITYSDK_OFFSET(0x193EF300)
#define CPPFKDCPPKM__CCTOR_OFFSET UNITYSDK_OFFSET(0x193EF080)
#define CPPFKDCPPKM__CTOR_OFFSET UNITYSDK_OFFSET(0x193EF070)

inline static constexpr unsigned int CPPFKDCPPKM_TypeDefinitionIndex = 54107;

class CPPFKDCPPKM : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt16>** StaticGet_AMHHAJPBLFL()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(CPPFKDCPPKM_TypeDefinitionIndex)->GetStaticField(0x4F330);
	}
	::System::Type* KDFBNDADODB; // 0x10
	::System::UInt16 CFBMMGHOIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPPFKDCPPKM__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPPFKDCPPKM__CCTOR_OFFSET))();
	}

	static ::System::Boolean AIEOINEIMGB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CPPFKDCPPKM_AIEOINEIMGB_OFFSET))();
	}

	static ::System::UInt16 EEMIMLEJPME(::System::Type* OBNIAHNMHPF)
	{
		return ((::System::UInt16(*)(::System::Type*))((::PBYTE)hIl2Cpp + CPPFKDCPPKM_EEMIMLEJPME_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Void IDBOFEENHJI(::System::Reflection::Assembly* NLMCCGFKCAO)
	{
		return ((::System::Void(*)(::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + CPPFKDCPPKM_IDBOFEENHJI_OFFSET))(NLMCCGFKCAO);
	}
};
