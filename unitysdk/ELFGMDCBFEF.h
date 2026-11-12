#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELFGMDCBFEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x16467C90)
#define ELFGMDCBFEF_CGCPPMMNFDI_OFFSET UNITYSDK_OFFSET(0x164676C0)
#define ELFGMDCBFEF_CTOR_OFFSET UNITYSDK_OFFSET(0x16467BE0)
#define ELFGMDCBFEF_HOCIDNHMGNK_OFFSET UNITYSDK_OFFSET(0x164679D0)
#define ELFGMDCBFEF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16467660)

inline static constexpr unsigned int ELFGMDCBFEF_TypeDefinitionIndex = 48186;

	class ELFGMDCBFEF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* PPLBOGOCJGO; // 0x10
		::System::Object* DCOPELFHOLO; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* FHBGOMGAIMO; // 0x20
		::System::Int32 HDHPNOOMAGE; // 0x28
		static ::System::Int32* StaticGet_NEAJAFLCGCP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ELFGMDCBFEF")->GetStaticField(0x7C10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELFGMDCBFEF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELFGMDCBFEF_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + ELFGMDCBFEF_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Int32>* CGCPPMMNFDI(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ELFGMDCBFEF_CGCPPMMNFDI_OFFSET))(this, a1, a2);
		}

		::System::Int32 HOCIDNHMGNK(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ELFGMDCBFEF_HOCIDNHMGNK_OFFSET))(this, a1);
		}

	};
