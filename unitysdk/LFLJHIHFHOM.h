#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGLBBJOEJME;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LFLJHIHFHOM_BLOFDFGGEEG_OFFSET UNITYSDK_OFFSET(0xB6830A0)
#define LFLJHIHFHOM_CCTOR_OFFSET UNITYSDK_OFFSET(0xB6831B0)
#define LFLJHIHFHOM_CTOR_OFFSET UNITYSDK_OFFSET(0xB6831A0)
#define LFLJHIHFHOM_NCOJEICKMLO_1_OFFSET UNITYSDK_OFFSET(0xB682FB0)
#define LFLJHIHFHOM_NCOJEICKMLO_OFFSET UNITYSDK_OFFSET(0xB682EA0)
#define LFLJHIHFHOM_NDPJFHDLJIO_OFFSET UNITYSDK_OFFSET(0xB682B00)
#define LFLJHIHFHOM_OCPOIJCNAEK_OFFSET UNITYSDK_OFFSET(0xB682D60)

inline static constexpr unsigned int LFLJHIHFHOM_TypeDefinitionIndex = 47294;

	class LFLJHIHFHOM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::AGLBBJOEJME*>** StaticGet_OPKFFBBMAOG()
		{
			return (::System::Collections::Generic::List_1<::AGLBBJOEJME*>**)UnitySDK::FromName("", "LFLJHIHFHOM")->GetStaticField(0x5BA80);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_FFDONKHOLMC()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "LFLJHIHFHOM")->GetStaticField(0x5BA88);
		}

		static ::System::Int32* StaticGet_BOCKHIOIMBO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LFLJHIHFHOM")->GetStaticField(0x13EA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLJHIHFHOM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFLJHIHFHOM_CCTOR_OFFSET))();
		}

		static ::System::Void NDPJFHDLJIO(::System::Collections::Generic::List_1<::AGLBBJOEJME*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::AGLBBJOEJME*>*))((::PBYTE)hIl2Cpp + LFLJHIHFHOM_NDPJFHDLJIO_OFFSET))(a1);
		}

		static ::System::Void OCPOIJCNAEK(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LFLJHIHFHOM_OCPOIJCNAEK_OFFSET))(a1, a2);
		}

		static ::System::Void NCOJEICKMLO(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LFLJHIHFHOM_NCOJEICKMLO_OFFSET))(a1, a2);
		}

		static ::System::Void NCOJEICKMLO_1(::System::Object* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LFLJHIHFHOM_NCOJEICKMLO_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::AGLBBJOEJME*>* BLOFDFGGEEG(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::List_1<::AGLBBJOEJME*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + LFLJHIHFHOM_BLOFDFGGEEG_OFFSET))(a1);
		}

	};
