#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }
namespace System::Reflection { class TypeInfo; }

#define CNAAOEJDFMN_JOPFPHGCCOA_OFFSET UNITYSDK_OFFSET(0x1D4750F0)
#define CNAAOEJDFMN_JPAPHGADJNL_OFFSET UNITYSDK_OFFSET(0x1D474F60)
#define CNAAOEJDFMN_KEEPGLJFKCH_OFFSET UNITYSDK_OFFSET(0x1D4750C0)
#define CNAAOEJDFMN_NEJKNGFIDBF_OFFSET UNITYSDK_OFFSET(0x1D474EF0)
#define CNAAOEJDFMN_NILALFFCHAC_OFFSET UNITYSDK_OFFSET(0x1D474F20)
#define CNAAOEJDFMN_OFOGFDBBMMD_OFFSET UNITYSDK_OFFSET(0x1D475160)
#define CNAAOEJDFMN_PGKLPIMAGGK_OFFSET UNITYSDK_OFFSET(0x1D474EC0)

inline static constexpr unsigned int CNAAOEJDFMN_TypeDefinitionIndex = 30676;

class CNAAOEJDFMN : public ::System::Object
{
public:
	static ::System::Boolean PGKLPIMAGGK(::System::Reflection::TypeInfo* OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + CNAAOEJDFMN_PGKLPIMAGGK_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Reflection::MethodInfo* NEJKNGFIDBF(::System::Reflection::PropertyInfo* EHBIEMFBKJG)
	{
		return ((::System::Reflection::MethodInfo*(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + CNAAOEJDFMN_NEJKNGFIDBF_OFFSET))(EHBIEMFBKJG);
	}

	static ::System::Boolean NILALFFCHAC(::System::Reflection::TypeInfo* OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + CNAAOEJDFMN_NILALFFCHAC_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Boolean JPAPHGADJNL(::System::Reflection::TypeInfo* OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + CNAAOEJDFMN_JPAPHGADJNL_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Reflection::MethodInfo* KEEPGLJFKCH(::System::Reflection::PropertyInfo* EHBIEMFBKJG)
	{
		return ((::System::Reflection::MethodInfo*(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + CNAAOEJDFMN_KEEPGLJFKCH_OFFSET))(EHBIEMFBKJG);
	}

	static ::System::Boolean JOPFPHGCCOA(::System::Reflection::TypeInfo* OBNIAHNMHPF)
	{
		return ((::System::Boolean(*)(::System::Reflection::TypeInfo*))((::PBYTE)hIl2Cpp + CNAAOEJDFMN_JOPFPHGCCOA_OFFSET))(OBNIAHNMHPF);
	}

	static ::System::Boolean OFOGFDBBMMD(::System::Reflection::PropertyInfo* BAKBLEIOFFA)
	{
		return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + CNAAOEJDFMN_OFOGFDBBMMD_OFFSET))(BAKBLEIOFFA);
	}
};
