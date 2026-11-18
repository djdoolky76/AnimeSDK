#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AAPCFDDBMJP;
class ALCEJNMFHOK;
class IHNJCJPPBIH;
namespace Google::Protobuf::Reflection { class ReflectionUtil_IExtensionReflectionHelper; }

#define DAPLGFPMHJK_BLNAIDHHDLK_OFFSET UNITYSDK_OFFSET(0x1FB08310)
#define DAPLGFPMHJK_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0x1FB083F0)
#define DAPLGFPMHJK_HBDBJDANMLP_OFFSET UNITYSDK_OFFSET(0x1FB08220)
#define DAPLGFPMHJK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1FB08230)
#define DAPLGFPMHJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB081B0)

inline static constexpr unsigned int DAPLGFPMHJK_TypeDefinitionIndex = 18136;

class DAPLGFPMHJK : public ::System::Object
{
public:
	::ALCEJNMFHOK* CIEOCEADIJB; // 0x10
	::Google::Protobuf::Reflection::ReflectionUtil_IExtensionReflectionHelper* FMJAFFDJMBB; // 0x18
	::AAPCFDDBMJP* _GOODJIDDJPP_k__BackingField; // 0x20

	::System::Void _ctor(::AAPCFDDBMJP* DOOHCBBJGFD)
	{
		return ((::System::Void(*)(::PVOID, ::AAPCFDDBMJP*))((::PBYTE)hIl2Cpp + DAPLGFPMHJK__CTOR_OFFSET))(this, DOOHCBBJGFD);
	}

	::AAPCFDDBMJP* HBDBJDANMLP()
	{
		return ((::AAPCFDDBMJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLGFPMHJK_HBDBJDANMLP_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE(::IHNJCJPPBIH* NAPFALLANDL)
	{
		return ((::System::Void(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + DAPLGFPMHJK_PHOADBJGFBE_OFFSET))(this, NAPFALLANDL);
	}

	::System::Boolean BLNAIDHHDLK(::IHNJCJPPBIH* NAPFALLANDL)
	{
		return ((::System::Boolean(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + DAPLGFPMHJK_BLNAIDHHDLK_OFFSET))(this, NAPFALLANDL);
	}

	::System::Object* FHDJDIIPGGP(::IHNJCJPPBIH* NAPFALLANDL)
	{
		return ((::System::Object*(*)(::PVOID, ::IHNJCJPPBIH*))((::PBYTE)hIl2Cpp + DAPLGFPMHJK_FHDJDIIPGGP_OFFSET))(this, NAPFALLANDL);
	}
};
