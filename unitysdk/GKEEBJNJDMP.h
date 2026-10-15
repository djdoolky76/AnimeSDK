#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsCityType.h"
#include "unitysdk/System/Object.h"
class GIFMNJNCIEF;
class NBLLMAPNLOK;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKEEBJNJDMP_AGEPBCBPEBM_OFFSET UNITYSDK_OFFSET(0x15A893F0)
#define GKEEBJNJDMP_BOABACAIPNG_OFFSET UNITYSDK_OFFSET(0x15A887F0)
#define GKEEBJNJDMP_CEFKMLOIBPK_OFFSET UNITYSDK_OFFSET(0x15A88ED0)
#define GKEEBJNJDMP_CTOR_OFFSET UNITYSDK_OFFSET(0x15A886E0)
#define GKEEBJNJDMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A88740)
#define GKEEBJNJDMP_GBJLOLKMNGD_OFFSET UNITYSDK_OFFSET(0x15A89720)
#define GKEEBJNJDMP_GET_CURRENTCITYTYPE_OFFSET UNITYSDK_OFFSET(0x15A893D0)
#define GKEEBJNJDMP_JNLPGKIILBN_OFFSET UNITYSDK_OFFSET(0x15A88CA0)
#define GKEEBJNJDMP_LCKLPIBDHHO_OFFSET UNITYSDK_OFFSET(0x15A896A0)
#define GKEEBJNJDMP_NNLLPGPGILJ_OFFSET UNITYSDK_OFFSET(0x15A88E10)
#define GKEEBJNJDMP_OGLFCHJPIHJ_OFFSET UNITYSDK_OFFSET(0x15A894C0)
#define GKEEBJNJDMP_OKBOCCICKEL_OFFSET UNITYSDK_OFFSET(0x15A89850)
#define GKEEBJNJDMP_OPKJHFDIAOD_OFFSET UNITYSDK_OFFSET(0x15A89440)
#define GKEEBJNJDMP_SET_CURRENTCITYTYPE_OFFSET UNITYSDK_OFFSET(0x15A893E0)

inline static constexpr unsigned int GKEEBJNJDMP_TypeDefinitionIndex = 80322;

	class GKEEBJNJDMP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* MMOOGOKHNNO; // 0x10
		::GIFMNJNCIEF* EBNHHEODPHP; // 0x18
		::RPG::GameCore::LimaoNewsCityType _CurrentCityType_k__BackingField; // 0x20
		// static const ::System::String* JMLBPBLEHAE; // 0x0
		::System::Void _ctor(::GIFMNJNCIEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIFMNJNCIEF*))((::PBYTE)hIl2Cpp + GKEEBJNJDMP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEEBJNJDMP_DISPOSE_OFFSET))(this);
		}

		::System::Void BOABACAIPNG(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + GKEEBJNJDMP_BOABACAIPNG_OFFSET))(this, a1);
		}

		::System::Void JNLPGKIILBN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKEEBJNJDMP_JNLPGKIILBN_OFFSET))(this, a1);
		}

		::System::Boolean NNLLPGPGILJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKEEBJNJDMP_NNLLPGPGILJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* CEFKMLOIBPK(::System::Int32 a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + GKEEBJNJDMP_CEFKMLOIBPK_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::LimaoNewsCityType get_CurrentCityType()
		{
			return ((::RPG::GameCore::LimaoNewsCityType(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEEBJNJDMP_GET_CURRENTCITYTYPE_OFFSET))(this);
		}

		::System::Void set_CurrentCityType(::RPG::GameCore::LimaoNewsCityType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LimaoNewsCityType))((::PBYTE)hIl2Cpp + GKEEBJNJDMP_SET_CURRENTCITYTYPE_OFFSET))(this, a1);
		}

		::System::Void AGEPBCBPEBM(::RPG::GameCore::LimaoNewsCityType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LimaoNewsCityType))((::PBYTE)hIl2Cpp + GKEEBJNJDMP_AGEPBCBPEBM_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* OPKJHFDIAOD()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEEBJNJDMP_OPKJHFDIAOD_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* LCKLPIBDHHO()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEEBJNJDMP_LCKLPIBDHHO_OFFSET))(this);
		}

		::NBLLMAPNLOK* OGLFCHJPIHJ()
		{
			return ((::NBLLMAPNLOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEEBJNJDMP_OGLFCHJPIHJ_OFFSET))(this);
		}

		::System::Boolean GBJLOLKMNGD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKEEBJNJDMP_GBJLOLKMNGD_OFFSET))(this);
		}

		::System::Void OKBOCCICKEL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKEEBJNJDMP_OKBOCCICKEL_OFFSET))(this, a1);
		}

	};
