#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFJIPJHCHJA;
class PEELDCHBLJK;
namespace RPG::GameCore { class LevelPedestrianV2ExtendFreeStyleConfig; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KOJLADIPNKE_CTOR_OFFSET UNITYSDK_OFFSET(0xB599770)
#define KOJLADIPNKE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB59A5E0)
#define KOJLADIPNKE_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xB59A790)

inline static constexpr unsigned int KOJLADIPNKE_TypeDefinitionIndex = 69278;

	class KOJLADIPNKE : public ::System::Object
	{
	public:
		::PEELDCHBLJK* FLMODBLFAGD; // 0x10
		::RPG::GameCore::LevelPedestrianV2ExtendFreeStyleConfig* IGHAHBNLIJA; // 0x18
		::Il2CppArray<::System::Object*>* AFDJNPHEGPP; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* HEEOMILPFJK; // 0x28
		::System::Void _ctor(::PEELDCHBLJK* a1, ::RPG::GameCore::LevelPedestrianV2ExtendFreeStyleConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PEELDCHBLJK*, ::RPG::GameCore::LevelPedestrianV2ExtendFreeStyleConfig*))((::PBYTE)hIl2Cpp + KOJLADIPNKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJLADIPNKE_DISPOSE_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::KFJIPJHCHJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFJIPJHCHJA*))((::PBYTE)hIl2Cpp + KOJLADIPNKE_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
