#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AJDAJPHJBME;
class FCJECGJKGBA;
namespace RPG::Client { class PipelineCameraEngine; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EHHDNOGALBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1549B540)
#define EHHDNOGALBJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1549AE50)
#define EHHDNOGALBJ_DJEONKIFBGJ_OFFSET UNITYSDK_OFFSET(0x1549ACF0)
#define EHHDNOGALBJ_FKGHJKNDCDK_OFFSET UNITYSDK_OFFSET(0x1549AF30)
#define EHHDNOGALBJ_HMGHOGKEIAK_OFFSET UNITYSDK_OFFSET(0x1549B350)
#define EHHDNOGALBJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1549B220)
#define EHHDNOGALBJ_LHBEDGOINLK_OFFSET UNITYSDK_OFFSET(0x1549AC40)
#define EHHDNOGALBJ_NDPIGEHKKAI_OFFSET UNITYSDK_OFFSET(0x1549B0F0)
#define EHHDNOGALBJ_PAJACIKAEJH_OFFSET UNITYSDK_OFFSET(0x1549B420)

inline static constexpr unsigned int EHHDNOGALBJ_TypeDefinitionIndex = 69660;

	class EHHDNOGALBJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FCJECGJKGBA*>* GJKJMLKIGPM; // 0x10
		::System::Int32 MNDJEIMOIBA; // 0x18
		// static const ::System::Object BMNNIPFIIOP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHDNOGALBJ_CTOR_OFFSET))(this);
		}

		::FCJECGJKGBA* LHBEDGOINLK(::RPG::Client::PipelineCameraEngine* a1, ::AJDAJPHJBME* a2, ::System::Single a3, ::System::String* a4)
		{
			return ((::FCJECGJKGBA*(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::AJDAJPHJBME*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + EHHDNOGALBJ_LHBEDGOINLK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHDNOGALBJ_DISPOSE_OFFSET))(this);
		}

		::System::Void FKGHJKNDCDK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EHHDNOGALBJ_FKGHJKNDCDK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NDPIGEHKKAI(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + EHHDNOGALBJ_NDPIGEHKKAI_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHHDNOGALBJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HMGHOGKEIAK(::RPG::Client::PipelineCameraEngine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*))((::PBYTE)hIl2Cpp + EHHDNOGALBJ_HMGHOGKEIAK_OFFSET))(this, a1);
		}

		::FCJECGJKGBA* DJEONKIFBGJ()
		{
			return ((::FCJECGJKGBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHDNOGALBJ_DJEONKIFBGJ_OFFSET))(this);
		}

		::System::Boolean PAJACIKAEJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHDNOGALBJ_PAJACIKAEJH_OFFSET))(this);
		}

	};
