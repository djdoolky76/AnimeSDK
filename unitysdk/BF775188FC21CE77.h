#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A9B1B6297AF3FD1C;
class B8914273C9B35464;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BF775188FC21CE77_EA5811C3F758296C_OFFSET UNITYSDK_OFFSET(0x387EDE0)
#define BF775188FC21CE77_EE8C76B731BE55CE_OFFSET UNITYSDK_OFFSET(0x387EDA0)
#define BF775188FC21CE77__CTOR_OFFSET UNITYSDK_OFFSET(0x387EF10)

inline static constexpr unsigned int BF775188FC21CE77_TypeDefinitionIndex = 18110;

class BF775188FC21CE77 : public ::System::Object
{
public:
	::System::String* B16C878755BB982D; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::A9B1B6297AF3FD1C*>* ED73BA833996FE6F; // 0x18
	::Il2CppArray<::System::Collections::Generic::List_1<::B8914273C9B35464*>*>* FDBD733713B9C801; // 0x20

	::System::Void EA5811C3F758296C(::System::Int32 E3E3782F6FD52FC4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BF775188FC21CE77_EA5811C3F758296C_OFFSET))(this, E3E3782F6FD52FC4);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BF775188FC21CE77__CTOR_OFFSET))(this);
	}

	::System::Int32 EE8C76B731BE55CE(::BF775188FC21CE77* BEEE7A5A60941632)
	{
		return ((::System::Int32(*)(::PVOID, ::BF775188FC21CE77*))((::PBYTE)hIl2Cpp + BF775188FC21CE77_EE8C76B731BE55CE_OFFSET))(this, BEEE7A5A60941632);
	}
};
