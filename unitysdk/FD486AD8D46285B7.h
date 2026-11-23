#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BD4A35B451FC1E90.h"
#include "unitysdk/E68AA4EB51923C98/A128C7511D5C024F.h"
#include "unitysdk/E68AA4EB51923C98/B92BBABCE5ECD236.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FD486AD8D46285B7_BDD3E08703C1C2A0_OFFSET UNITYSDK_OFFSET(0x1BC9940)
#define FD486AD8D46285B7_EBDABFEA6EF30A22_OFFSET UNITYSDK_OFFSET(0x1BC9750)
#define FD486AD8D46285B7_FD196DB7F686EA19_OFFSET UNITYSDK_OFFSET(0x17B7850)
#define FD486AD8D46285B7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC9A60)
#define FD486AD8D46285B7__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6770)

inline static constexpr unsigned int FD486AD8D46285B7_TypeDefinitionIndex = 274;

class FD486AD8D46285B7 : public ::BD4A35B451FC1E90
{
public:
	static ::System::Collections::Generic::List_1<::E68AA4EB51923C98::B92BBABCE5ECD236>** StaticGet_A7E25F247EFFDB31()
	{
		return (::System::Collections::Generic::List_1<::E68AA4EB51923C98::B92BBABCE5ECD236>**)Il2CppClass::FromTypeDefinitionIndex(FD486AD8D46285B7_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FD486AD8D46285B7__CCTOR_OFFSET))();
	}

	::System::Void EBDABFEA6EF30A22()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD486AD8D46285B7_EBDABFEA6EF30A22_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD486AD8D46285B7__CTOR_OFFSET))(this);
	}

	::System::Void BDD3E08703C1C2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FD486AD8D46285B7_BDD3E08703C1C2A0_OFFSET))(this);
	}

	::E68AA4EB51923C98::A128C7511D5C024F FD196DB7F686EA19()
	{
		return ((::E68AA4EB51923C98::A128C7511D5C024F(*)(::PVOID))((::PBYTE)hIl2Cpp + FD486AD8D46285B7_FD196DB7F686EA19_OFFSET))(this);
	}
};
