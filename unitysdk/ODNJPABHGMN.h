#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class KHOLLIGHNLK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ODNJPABHGMN_HMEEIPDNPLD_OFFSET UNITYSDK_OFFSET(0x1E242870)
#define ODNJPABHGMN_HNEAGGGILAC_OFFSET UNITYSDK_OFFSET(0x1E242390)
#define ODNJPABHGMN_JJLCIPBKCKF_OFFSET UNITYSDK_OFFSET(0x1E242780)
#define ODNJPABHGMN_JLKJGBEAFGN_OFFSET UNITYSDK_OFFSET(0x1E2425B0)
#define ODNJPABHGMN_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x1E242430)
#define ODNJPABHGMN_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x1E242370)
#define ODNJPABHGMN_PLHJCBKMPAI_OFFSET UNITYSDK_OFFSET(0x1E2422E0)
#define ODNJPABHGMN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E242290)
#define ODNJPABHGMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E241B90)

inline static constexpr unsigned int ODNJPABHGMN_TypeDefinitionIndex = 94301;

class ODNJPABHGMN : public ::System::Object
{
public:
	static ::ODNJPABHGMN** StaticGet_DDGNFJDLOKA()
	{
		return (::ODNJPABHGMN**)Il2CppClass::FromTypeDefinitionIndex(ODNJPABHGMN_TypeDefinitionIndex)->GetStaticField(0x526E0);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::KHOLLIGHNLK*, ::System::Int32>>* OLJJEJNFMDA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNJPABHGMN__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODNJPABHGMN__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::System::String*, ::KHOLLIGHNLK*, ::System::Int32>>* PLHJCBKMPAI()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::System::String*, ::KHOLLIGHNLK*, ::System::Int32>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNJPABHGMN_PLHJCBKMPAI_OFFSET))(this);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNJPABHGMN_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Boolean HNEAGGGILAC(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODNJPABHGMN_HNEAGGGILAC_OFFSET))(this, HIAIKHDFCLN);
	}

	::System::Void KKFNPONHGEM(::System::String* HIAIKHDFCLN, ::KHOLLIGHNLK* IKILJKBJDEL, ::System::Int32 OLAIAPANMKD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::KHOLLIGHNLK*, ::System::Int32))((::PBYTE)hIl2Cpp + ODNJPABHGMN_KKFNPONHGEM_OFFSET))(this, HIAIKHDFCLN, IKILJKBJDEL, OLAIAPANMKD);
	}

	::System::Boolean JLKJGBEAFGN(::System::String* HIAIKHDFCLN, ::KHOLLIGHNLK* IKILJKBJDEL, ::System::Int32 OLAIAPANMKD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::KHOLLIGHNLK*, ::System::Int32))((::PBYTE)hIl2Cpp + ODNJPABHGMN_JLKJGBEAFGN_OFFSET))(this, HIAIKHDFCLN, IKILJKBJDEL, OLAIAPANMKD);
	}

	::System::Int32 JJLCIPBKCKF(::System::String* HIAIKHDFCLN)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODNJPABHGMN_JJLCIPBKCKF_OFFSET))(this, HIAIKHDFCLN);
	}

	::KHOLLIGHNLK* HMEEIPDNPLD(::System::String* HIAIKHDFCLN)
	{
		return ((::KHOLLIGHNLK*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ODNJPABHGMN_HMEEIPDNPLD_OFFSET))(this, HIAIKHDFCLN);
	}
};
