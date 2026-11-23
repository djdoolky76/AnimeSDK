#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AA6B0E1284595953.h"
#include "unitysdk/E68AA4EB51923C98/B92BBABCE5ECD236.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

class FBE1E84058268223;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E8FDA858E7D2FBE3_A714F8459BEA4342_OFFSET UNITYSDK_OFFSET(0x2203550)
#define E8FDA858E7D2FBE3_EFBFE4A702CEC9C9_OFFSET UNITYSDK_OFFSET(0x2202E50)
#define E8FDA858E7D2FBE3_F0554FA861CE2B62_OFFSET UNITYSDK_OFFSET(0x22031E0)
#define E8FDA858E7D2FBE3__CCTOR_OFFSET UNITYSDK_OFFSET(0x2203BD0)
#define E8FDA858E7D2FBE3__CTOR_OFFSET UNITYSDK_OFFSET(0x2203CF0)

inline static constexpr unsigned int E8FDA858E7D2FBE3_TypeDefinitionIndex = 9047;

class E8FDA858E7D2FBE3 : public ::AA6B0E1284595953
{
public:
	static ::System::String** StaticGet_ECFB0BD042B2C4BC()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E8FDA858E7D2FBE3_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::String** StaticGet_A99840A852383B5D()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E8FDA858E7D2FBE3_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::String** StaticGet_BD0234B20FF4AF91()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E8FDA858E7D2FBE3_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::String** StaticGet_B0AEE9A53CA3DB38()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E8FDA858E7D2FBE3_TypeDefinitionIndex)->GetStaticField(0x18);
	}

	::System::Void _ctor(::E68AA4EB51923C98::B92BBABCE5ECD236 A78FAC14B9713BA9, ::E68AA4EB51923C98::B92BBABCE5ECD236 BB9E121A8D06F84D, ::System::UInt32 A67F3983754497F4)
	{
		return ((::System::Void(*)(::PVOID, ::E68AA4EB51923C98::B92BBABCE5ECD236, ::E68AA4EB51923C98::B92BBABCE5ECD236, ::System::UInt32))((::PBYTE)hIl2Cpp + E8FDA858E7D2FBE3__CTOR_OFFSET))(this, A78FAC14B9713BA9, BB9E121A8D06F84D, A67F3983754497F4);
	}

	::System::Collections::Generic::IEnumerable_1<::FBE1E84058268223*>* A714F8459BEA4342()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::FBE1E84058268223*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E8FDA858E7D2FBE3_A714F8459BEA4342_OFFSET))(this);
	}

	::System::Void EFBFE4A702CEC9C9(::System::Collections::Generic::List_1<::FBE1E84058268223*>* E8C53B86C741AEED)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FBE1E84058268223*>*))((::PBYTE)hIl2Cpp + E8FDA858E7D2FBE3_EFBFE4A702CEC9C9_OFFSET))(this, E8C53B86C741AEED);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E8FDA858E7D2FBE3__CCTOR_OFFSET))();
	}

	::System::Void F0554FA861CE2B62(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::E46B881AA2636190>* F581034D468B34F5, ::E68AA4EB51923C98::B92BBABCE5ECD236 ED833F95E0E065E2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::E46B881AA2636190>*, ::E68AA4EB51923C98::B92BBABCE5ECD236))((::PBYTE)hIl2Cpp + E8FDA858E7D2FBE3_F0554FA861CE2B62_OFFSET))(this, F581034D468B34F5, ED833F95E0E065E2);
	}
};
