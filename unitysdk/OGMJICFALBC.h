#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class NapLodController;
class NapLodControllerGroup;

#define OGMJICFALBC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13A5F930)
#define OGMJICFALBC_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13A5FAA0)
#define OGMJICFALBC_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13A5FA10)
#define OGMJICFALBC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13A5F8E0)
#define OGMJICFALBC__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A5F980)
#define OGMJICFALBC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A5FA00)

inline static constexpr unsigned int OGMJICFALBC_TypeDefinitionIndex = 60514;

class OGMJICFALBC : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xE0; // 0x0
	::NapLodControllerGroup* NCCNDEMLLIO; // 0x48
	::Il2CppArray<::NapLodController*>* EGDOILJBNJB; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGMJICFALBC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMJICFALBC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMJICFALBC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMJICFALBC_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OGMJICFALBC_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::OGMJICFALBC* JFDOOELFAOA()
	{
		return ((::OGMJICFALBC*(*)())((::PBYTE)hIl2Cpp + OGMJICFALBC_JFDOOELFAOA_OFFSET))();
	}
};
