#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GNNPPODPFEJ;
class JNAHOHABAIC;
class KEJEPBLFGDO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KMDFNDNGDNA_DBBHCKCDMMP_OFFSET UNITYSDK_OFFSET(0x129A7280)
#define KMDFNDNGDNA_GGDDJINMCON_OFFSET UNITYSDK_OFFSET(0x129A72A0)
#define KMDFNDNGDNA__CTOR_OFFSET UNITYSDK_OFFSET(0x129A7200)

inline static constexpr unsigned int KMDFNDNGDNA_TypeDefinitionIndex = 61301;

class KMDFNDNGDNA : public ::System::Object
{
public:
	::KEJEPBLFGDO* AHCKMGLHBFP; // 0x10
	::GNNPPODPFEJ* DEKJDEPKKLH; // 0x18
	::System::Collections::Generic::List_1<::JNAHOHABAIC*>* KIJACHIGCND; // 0x20
	::System::Int32 FKGNDKNHAEH; // 0x28
	::System::Boolean LIEJIGMGGOL; // 0x2C
	::System::Byte _padding0[0x3];
	::System::Int32 KJLBLAFJGEA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDFNDNGDNA__CTOR_OFFSET))(this);
	}

	::System::Int32 DBBHCKCDMMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMDFNDNGDNA_DBBHCKCDMMP_OFFSET))(this);
	}

	::System::Void GGDDJINMCON(::JNAHOHABAIC* JPAECKGGPHI)
	{
		return ((::System::Void(*)(::PVOID, ::JNAHOHABAIC*))((::PBYTE)hIl2Cpp + KMDFNDNGDNA_GGDDJINMCON_OFFSET))(this, JPAECKGGPHI);
	}
};
