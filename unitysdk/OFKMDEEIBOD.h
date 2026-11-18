#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AAPCFDDBMJP;
class IHNJCJPPBIH;
class OPABALJKAAF;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class MethodInfo; }
namespace System::Reflection { class PropertyInfo; }

#define OFKMDEEIBOD_EOCDJOEJOEH_OFFSET UNITYSDK_OFFSET(0x1FA68430)
#define OFKMDEEIBOD_HBDBJDANMLP_OFFSET UNITYSDK_OFFSET(0x1FA68280)
#define OFKMDEEIBOD_HMCANOOKKPJ_OFFSET UNITYSDK_OFFSET(0x1FA68390)
#define OFKMDEEIBOD_OMILAGOBMMO_OFFSET UNITYSDK_OFFSET(0x1FA68290)
#define OFKMDEEIBOD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1FA68330)
#define OFKMDEEIBOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA68270)

inline static constexpr unsigned int OFKMDEEIBOD_TypeDefinitionIndex = 18244;

class OFKMDEEIBOD : public ::System::Object
{
public:
	::OPABALJKAAF* _GOODJIDDJPP_k__BackingField; // 0x10
	::System::Action_1<::IHNJCJPPBIH*>* FMPMFGPHODJ; // 0x18
	::System::Func_2<::IHNJCJPPBIH*, ::System::Int32>* IDCPDPMLKII; // 0x20

	::System::Void _ctor(::OPABALJKAAF* DOOHCBBJGFD, ::System::Func_2<::IHNJCJPPBIH*, ::System::Int32>* IDCPDPMLKII, ::System::Action_1<::IHNJCJPPBIH*>* FMPMFGPHODJ)
	{
		return ((::System::Void(*)(::PVOID, ::OPABALJKAAF*, ::System::Func_2<::IHNJCJPPBIH*, ::System::Int32>*, ::System::Action_1<::IHNJCJPPBIH*>*))((::PBYTE)hIl2Cpp + OFKMDEEIBOD__CTOR_OFFSET))(this, DOOHCBBJGFD, IDCPDPMLKII, FMPMFGPHODJ);
	}

	::OPABALJKAAF* HBDBJDANMLP()
	{
		return ((::OPABALJKAAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKMDEEIBOD_HBDBJDANMLP_OFFSET))(this);
	}

	::AAPCFDDBMJP* OMILAGOBMMO(::IHNJCJPPBIH* NAPFALLANDL)
	{
		return ((::AAPCFDDBMJP*(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + OFKMDEEIBOD_OMILAGOBMMO_OFFSET))(this, NAPFALLANDL);
	}

	::System::Void PHOADBJGFBE(::IHNJCJPPBIH* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + OFKMDEEIBOD_PHOADBJGFBE_OFFSET))(this, NAPFALLANDL);
	}

	static ::OFKMDEEIBOD* HMCANOOKKPJ(::OPABALJKAAF* DOOHCBBJGFD, ::System::Reflection::PropertyInfo* IAKLINDNBBM, ::System::Reflection::MethodInfo* JINBDCKNOHL)
	{
		return ((::OFKMDEEIBOD*(*)(::OPABALJKAAF*, ::System::Reflection::PropertyInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + OFKMDEEIBOD_HMCANOOKKPJ_OFFSET))(DOOHCBBJGFD, IAKLINDNBBM, JINBDCKNOHL);
	}

	static ::OFKMDEEIBOD* EOCDJOEJOEH(::OPABALJKAAF* DOOHCBBJGFD)
	{
		return ((::OFKMDEEIBOD*(*)(::OPABALJKAAF*))((::PBYTE)hIl2Cpp + OFKMDEEIBOD_EOCDJOEJOEH_OFFSET))(DOOHCBBJGFD);
	}
};
