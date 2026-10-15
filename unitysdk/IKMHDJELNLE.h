#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CPGIAIBIFLI;
class NGLFOJKOKBH;
namespace RPGTools::Octree::Generation { class OctreeAreaData; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IKMHDJELNLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1649A7C0)
#define IKMHDJELNLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1649A8F0)
#define IKMHDJELNLE_GGLEMDCIOKJ_OFFSET UNITYSDK_OFFSET(0x1649A990)
#define IKMHDJELNLE_GOLFBHLCJGJ_1_OFFSET UNITYSDK_OFFSET(0x1649ACE0)
#define IKMHDJELNLE_GOLFBHLCJGJ_OFFSET UNITYSDK_OFFSET(0x1649AB10)
#define IKMHDJELNLE_HNFHGHPHDAM_OFFSET UNITYSDK_OFFSET(0x1649AE10)

inline static constexpr unsigned int IKMHDJELNLE_TypeDefinitionIndex = 48872;

	class IKMHDJELNLE : public ::System::Object
	{
	public:
		::Il2CppArray<::CPGIAIBIFLI*>* IHLBAMHPGFG; // 0x10
		::System::Void _ctor(::NGLFOJKOKBH* a1, ::Il2CppArray<::RPGTools::Octree::Generation::OctreeAreaData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGLFOJKOKBH*, ::Il2CppArray<::RPGTools::Octree::Generation::OctreeAreaData*>*))((::PBYTE)hIl2Cpp + IKMHDJELNLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMHDJELNLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean GGLEMDCIOKJ(::FKDIDBGBGMF a1, ::FKDIDBGBGMF a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKDIDBGBGMF, ::FKDIDBGBGMF, ::System::Single))((::PBYTE)hIl2Cpp + IKMHDJELNLE_GGLEMDCIOKJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GOLFBHLCJGJ(::FKDIDBGBGMF a1, ::FKDIDBGBGMF a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKDIDBGBGMF, ::FKDIDBGBGMF, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IKMHDJELNLE_GOLFBHLCJGJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean GOLFBHLCJGJ_1(::FKDIDBGBGMF a1, ::FKDIDBGBGMF a2, ::FKDIDBGBGMF a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKDIDBGBGMF, ::FKDIDBGBGMF, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + IKMHDJELNLE_GOLFBHLCJGJ_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IEnumerable_1<::FKDIDBGBGMF>* HNFHGHPHDAM(::FKDIDBGBGMF a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FKDIDBGBGMF>*(*)(::PVOID, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + IKMHDJELNLE_HNFHGHPHDAM_OFFSET))(this, a1);
		}

	};
