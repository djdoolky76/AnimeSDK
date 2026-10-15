#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECIIEBFKNMJ;
class GMGHBGLNMFF;
class HAJDFCHFBGN;
class IOLNIIPOODC;
class KAKADGHNMFK;
namespace RPG::GameCore { class BaseChimeraDuelEntitiesSelectorConfig; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define PPNKAAHMBJI_CTOR_OFFSET UNITYSDK_OFFSET(0xC38DF10)
#define PPNKAAHMBJI_DJMGCJCAJAI_OFFSET UNITYSDK_OFFSET(0xC38EB20)
#define PPNKAAHMBJI_GET__CONTEXTGETTER_OFFSET UNITYSDK_OFFSET(0xC38DEA0)
#define PPNKAAHMBJI_GET__SERVICES_OFFSET UNITYSDK_OFFSET(0xC38DE70)
#define PPNKAAHMBJI_IEPECIELJGD_OFFSET UNITYSDK_OFFSET(0xC38ED10)
#define PPNKAAHMBJI_JFFEBOFGCJL_OFFSET UNITYSDK_OFFSET(0xC38DEB0)
#define PPNKAAHMBJI_JMOJPBHODHH_OFFSET UNITYSDK_OFFSET(0xC38DE80)
#define PPNKAAHMBJI_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xC38DF20)
#define PPNKAAHMBJI_KFMFFCJJDGN_OFFSET UNITYSDK_OFFSET(0xC38EF00)
#define PPNKAAHMBJI_KHHIGLGPLJA_OFFSET UNITYSDK_OFFSET(0xC38E550)

inline static constexpr unsigned int PPNKAAHMBJI_TypeDefinitionIndex = 77570;

	class PPNKAAHMBJI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::IOLNIIPOODC*>* PBPIIBFFNCO; // 0x10
		::System::Func_1<::GMGHBGLNMFF*>* __ContextGetter_k__BackingField; // 0x18
		::ECIIEBFKNMJ* __Services_k__BackingField; // 0x20
		::System::Void _ctor(::ECIIEBFKNMJ* a1, ::System::Func_1<::GMGHBGLNMFF*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*, ::System::Func_1<::GMGHBGLNMFF*>*))((::PBYTE)hIl2Cpp + PPNKAAHMBJI_CTOR_OFFSET))(this, a1, a2);
		}

		::ECIIEBFKNMJ* get__Services()
		{
			return ((::ECIIEBFKNMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNKAAHMBJI_GET__SERVICES_OFFSET))(this);
		}

		::HAJDFCHFBGN* JMOJPBHODHH()
		{
			return ((::HAJDFCHFBGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNKAAHMBJI_JMOJPBHODHH_OFFSET))(this);
		}

		::System::Func_1<::GMGHBGLNMFF*>* get__ContextGetter()
		{
			return ((::System::Func_1<::GMGHBGLNMFF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNKAAHMBJI_GET__CONTEXTGETTER_OFFSET))(this);
		}

		::GMGHBGLNMFF* JFFEBOFGCJL()
		{
			return ((::GMGHBGLNMFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNKAAHMBJI_JFFEBOFGCJL_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* KFGJEKJHIMB(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + PPNKAAHMBJI_KFGJEKJHIMB_OFFSET))(this, a1);
		}

		::KAKADGHNMFK* DJMGCJCAJAI()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNKAAHMBJI_DJMGCJCAJAI_OFFSET))(this);
		}

		::KAKADGHNMFK* IEPECIELJGD()
		{
			return ((::KAKADGHNMFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPNKAAHMBJI_IEPECIELJGD_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>* KFMFFCJJDGN(::System::String* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::KAKADGHNMFK*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PPNKAAHMBJI_KFMFFCJJDGN_OFFSET))(this, a1);
		}

		::IOLNIIPOODC* KHHIGLGPLJA(::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig* a1)
		{
			return ((::IOLNIIPOODC*(*)(::PVOID, ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig*))((::PBYTE)hIl2Cpp + PPNKAAHMBJI_KHHIGLGPLJA_OFFSET))(this, a1);
		}

	};
