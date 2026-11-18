#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IICDJPFNMDC;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IICDJPFNMDC_GCKOJLCEIGL_JLPEKDDLHMI_OFFSET UNITYSDK_OFFSET(0x15C12C70)
#define IICDJPFNMDC_GCKOJLCEIGL_NCJOIFBEMPL_OFFSET UNITYSDK_OFFSET(0x15C12C40)
#define IICDJPFNMDC_GCKOJLCEIGL__CTOR_OFFSET UNITYSDK_OFFSET(0x15C12C30)

inline static constexpr unsigned int IICDJPFNMDC_GCKOJLCEIGL_TypeDefinitionIndex = 92149;

class IICDJPFNMDC_GCKOJLCEIGL : public ::System::Object
{
public:
	::System::Func_2<::System::Int32, ::System::Boolean>* FFMGICPLKFB; // 0x10
	::System::Func_2<::System::Int32, ::System::Boolean>* KAKAEMACNPB; // 0x18
	::IICDJPFNMDC* KLHPEBKNIFB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* CMDBAJJHIEB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IICDJPFNMDC_GCKOJLCEIGL__CTOR_OFFSET))(this);
	}

	::System::Boolean NCJOIFBEMPL(::System::Int32 OIKFFGKDHME)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IICDJPFNMDC_GCKOJLCEIGL_NCJOIFBEMPL_OFFSET))(this, OIKFFGKDHME);
	}

	::System::Boolean JLPEKDDLHMI(::System::Int32 OIKFFGKDHME)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IICDJPFNMDC_GCKOJLCEIGL_JLPEKDDLHMI_OFFSET))(this, OIKFFGKDHME);
	}
};
