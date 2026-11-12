#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
class JBOLKLEHLME;
namespace RPG::Client::NavMap::FiveDim { class SectionConfig; }
namespace RPG::GameCore { class FiveDimFogOfWarConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JBOLKLEHLME_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB8AF750)
#define JBOLKLEHLME_CTOR_OFFSET UNITYSDK_OFFSET(0xB8AFC50)
#define JBOLKLEHLME_GET_FACESIZE_OFFSET UNITYSDK_OFFSET(0xB8AFCD0)
#define JBOLKLEHLME_GET_FOGS_OFFSET UNITYSDK_OFFSET(0xB8AFCF0)
#define JBOLKLEHLME_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0xB8AFCB0)
#define JBOLKLEHLME_GET_SECTIONVERTICES_OFFSET UNITYSDK_OFFSET(0xB8AFC90)
#define JBOLKLEHLME_SET_FACESIZE_OFFSET UNITYSDK_OFFSET(0xB8AFCE0)
#define JBOLKLEHLME_SET_FOGS_OFFSET UNITYSDK_OFFSET(0xB8AFD00)
#define JBOLKLEHLME_SET_SECTIONS_OFFSET UNITYSDK_OFFSET(0xB8AFCC0)
#define JBOLKLEHLME_SET_SECTIONVERTICES_OFFSET UNITYSDK_OFFSET(0xB8AFCA0)

inline static constexpr unsigned int JBOLKLEHLME_TypeDefinitionIndex = 76816;

	class JBOLKLEHLME : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>* _Sections_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _Fogs_k__BackingField; // 0x18
		::Il2CppArray<::RPG::MVector2>* _SectionVertices_k__BackingField; // 0x20
		::RPG::MVector2 _FaceSize_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOLKLEHLME_CTOR_OFFSET))(this);
		}

		static ::JBOLKLEHLME* BPLPBPMEODA(::RPG::GameCore::FiveDimFogOfWarConfig* a1, ::RPG::MVector2 a2)
		{
			return ((::JBOLKLEHLME*(*)(::RPG::GameCore::FiveDimFogOfWarConfig*, ::RPG::MVector2))((::PBYTE)hIl2Cpp + JBOLKLEHLME_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::Il2CppArray<::RPG::MVector2>* get_SectionVertices()
		{
			return ((::Il2CppArray<::RPG::MVector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOLKLEHLME_GET_SECTIONVERTICES_OFFSET))(this);
		}

		::System::Void set_SectionVertices(::Il2CppArray<::RPG::MVector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::MVector2>*))((::PBYTE)hIl2Cpp + JBOLKLEHLME_SET_SECTIONVERTICES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>* get_Sections()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOLKLEHLME_GET_SECTIONS_OFFSET))(this);
		}

		::System::Void set_Sections(::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::FiveDim::SectionConfig*>*))((::PBYTE)hIl2Cpp + JBOLKLEHLME_SET_SECTIONS_OFFSET))(this, a1);
		}

		::RPG::MVector2 get_FaceSize()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOLKLEHLME_GET_FACESIZE_OFFSET))(this);
		}

		::System::Void set_FaceSize(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + JBOLKLEHLME_SET_FACESIZE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_Fogs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOLKLEHLME_GET_FOGS_OFFSET))(this);
		}

		::System::Void set_Fogs(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + JBOLKLEHLME_SET_FOGS_OFFSET))(this, a1);
		}

	};
