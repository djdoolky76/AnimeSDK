#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
class JMAEIEGICHJ_OffsetTextureData;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JMAEIEGICHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBA852A0)
#define JMAEIEGICHJ_EDEEJENJIME_OFFSET UNITYSDK_OFFSET(0xBA84450)
#define JMAEIEGICHJ_EDHCKJPEMBF_1_OFFSET UNITYSDK_OFFSET(0xBA84E40)
#define JMAEIEGICHJ_EDHCKJPEMBF_OFFSET UNITYSDK_OFFSET(0xBA84550)
#define JMAEIEGICHJ_HGMANCNLKON_OFFSET UNITYSDK_OFFSET(0xBA83F30)
#define JMAEIEGICHJ_KDNIMCEMMAD_OFFSET UNITYSDK_OFFSET(0xBA83F90)
#define JMAEIEGICHJ_KNMDHHAMPFH_OFFSET UNITYSDK_OFFSET(0xBA84D20)
#define JMAEIEGICHJ_MLCAACEMIHP_OFFSET UNITYSDK_OFFSET(0xBA83ED0)

inline static constexpr unsigned int JMAEIEGICHJ_TypeDefinitionIndex = 52930;

	class JMAEIEGICHJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMAEIEGICHJ_CTOR_OFFSET))(this);
		}

		static ::System::Int32 MLCAACEMIHP(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + JMAEIEGICHJ_MLCAACEMIHP_OFFSET))(a1);
		}

		static ::System::Int32 HGMANCNLKON(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + JMAEIEGICHJ_HGMANCNLKON_OFFSET))(a1);
		}

		static ::System::Boolean KDNIMCEMMAD(::System::Int32 a1, ::System::Object* a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>* a3, ::UnityEngine::Vector3Int a4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Object*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3Int>*, ::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + JMAEIEGICHJ_KDNIMCEMMAD_OFFSET))(a1, a2, a3, a4);
		}

		static ::JMAEIEGICHJ_OffsetTextureData* EDEEJENJIME(::Il2CppArray<::UnityEngine::Vector3Int>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::JMAEIEGICHJ_OffsetTextureData*(*)(::Il2CppArray<::UnityEngine::Vector3Int>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JMAEIEGICHJ_EDEEJENJIME_OFFSET))(a1, a2, a3);
		}

		static ::JMAEIEGICHJ_OffsetTextureData* EDHCKJPEMBF(::Il2CppArray<::UnityEngine::Vector3Int>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::JMAEIEGICHJ_OffsetTextureData*(*)(::Il2CppArray<::UnityEngine::Vector3Int>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JMAEIEGICHJ_EDHCKJPEMBF_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean KNMDHHAMPFH(::System::Int32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + JMAEIEGICHJ_KNMDHHAMPFH_OFFSET))(a1, a2, a3);
		}

		static ::JMAEIEGICHJ_OffsetTextureData* EDHCKJPEMBF_1(::Il2CppArray<::UnityEngine::Vector3Int>* a1)
		{
			return ((::JMAEIEGICHJ_OffsetTextureData*(*)(::Il2CppArray<::UnityEngine::Vector3Int>*))((::PBYTE)hIl2Cpp + JMAEIEGICHJ_EDHCKJPEMBF_1_OFFSET))(a1);
		}

	};
