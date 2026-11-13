#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEFMFFNHLOI_StencilPriorit.h"
#include "unitysdk/System/Object.h"
class GEFMFFNHLOI;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GEFMFFNHLOI_BPCNHAPDMDO_OFFSET UNITYSDK_OFFSET(0x17CD4F70)
#define GEFMFFNHLOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x17CD59A0)
#define GEFMFFNHLOI_CEPGJPELGMA_OFFSET UNITYSDK_OFFSET(0x17CD4D20)
#define GEFMFFNHLOI_CTOR_OFFSET UNITYSDK_OFFSET(0x17CD5910)
#define GEFMFFNHLOI_DCAPPDAAOKD_OFFSET UNITYSDK_OFFSET(0x17CD58B0)
#define GEFMFFNHLOI_DGGDJBENNDD_OFFSET UNITYSDK_OFFSET(0x17CD53B0)
#define GEFMFFNHLOI_FCGMBJFOIFH_OFFSET UNITYSDK_OFFSET(0x17CD5310)
#define GEFMFFNHLOI_IDHMKACONEE_OFFSET UNITYSDK_OFFSET(0x17CD5010)
#define GEFMFFNHLOI_JLDEMDDHDCF_OFFSET UNITYSDK_OFFSET(0x17CD56B0)
#define GEFMFFNHLOI_JNDDENCENAO_OFFSET UNITYSDK_OFFSET(0x17CD50B0)
#define GEFMFFNHLOI_LGNLICEFNML_OFFSET UNITYSDK_OFFSET(0x17CD4E50)
#define GEFMFFNHLOI_LLIMAMJMPMN_OFFSET UNITYSDK_OFFSET(0x17CD5730)
#define GEFMFFNHLOI_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x17CD57F0)

inline static constexpr unsigned int GEFMFFNHLOI_TypeDefinitionIndex = 72160;

	class GEFMFFNHLOI : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* EMOHADEHONO; // 0x10
		::Il2CppArray<::System::UInt32>* NMANFJEFKIM; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* JGPCIOHJINJ; // 0x20
		static ::GEFMFFNHLOI** StaticGet_HEHMLNNJEJA()
		{
			return (::GEFMFFNHLOI**)UnitySDK::FromName("", "GEFMFFNHLOI")->GetStaticField(0x67310);
		}

		// static const ::System::Object DIJPBNBEPCG; // 0x0
		// static const ::System::Object HKOLOHPOJJC; // 0x0
		// static const ::System::Object ELAECPCOIKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFMFFNHLOI_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEFMFFNHLOI_CCTOR_OFFSET))();
		}

		static ::GEFMFFNHLOI_StencilPriorit CEPGJPELGMA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::GEFMFFNHLOI_StencilPriorit(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GEFMFFNHLOI_CEPGJPELGMA_OFFSET))(a1);
		}

		static ::System::Int32 LGNLICEFNML(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + GEFMFFNHLOI_LGNLICEFNML_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 IDHMKACONEE(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + GEFMFFNHLOI_IDHMKACONEE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FCGMBJFOIFH(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GEFMFFNHLOI_FCGMBJFOIFH_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 JLDEMDDHDCF(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GEFMFFNHLOI_JLDEMDDHDCF_OFFSET))(a1);
		}

		static ::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEFMFFNHLOI_PJPFIHFAHGO_OFFSET))();
		}

		::System::Int32 BPCNHAPDMDO(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + GEFMFFNHLOI_BPCNHAPDMDO_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 JNDDENCENAO(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + GEFMFFNHLOI_JNDDENCENAO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DGGDJBENNDD(::System::UInt32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GEFMFFNHLOI_DGGDJBENNDD_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 LLIMAMJMPMN(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEFMFFNHLOI_LLIMAMJMPMN_OFFSET))(this, a1);
		}

		::System::Void DCAPPDAAOKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEFMFFNHLOI_DCAPPDAAOKD_OFFSET))(this);
		}

	};
