#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODGHIIDBNJB.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNFFAEDDOFM___C_BIGBKOJDCBA_OFFSET UNITYSDK_OFFSET(0x1E5E0730)
#define BNFFAEDDOFM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E06E0)
#define BNFFAEDDOFM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E0720)

inline static constexpr unsigned int BNFFAEDDOFM___c_TypeDefinitionIndex = 34044;

class BNFFAEDDOFM___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int64, ::System::Collections::Generic::List_1<::System::Action_2<::ODGHIIDBNJB, ::System::Object*>*>*>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::System::Int64, ::System::Collections::Generic::List_1<::System::Action_2<::ODGHIIDBNJB, ::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(BNFFAEDDOFM___c_TypeDefinitionIndex)->GetStaticField(0x2A060);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BNFFAEDDOFM___c_TypeDefinitionIndex)->GetStaticField(0x2A068);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNFFAEDDOFM___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFFAEDDOFM___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Action_2<::ODGHIIDBNJB, ::System::Object*>*>* BIGBKOJDCBA(::System::Int64 PIIPCLCCOIG)
	{
		return ((::System::Collections::Generic::List_1<::System::Action_2<::ODGHIIDBNJB, ::System::Object*>*>*(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + BNFFAEDDOFM___C_BIGBKOJDCBA_OFFSET))(this, PIIPCLCCOIG);
	}
};
