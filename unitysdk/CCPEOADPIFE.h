#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class PlanetFesPlaySpinAnim; }
namespace RPG::GameCore { class PlanetFesAnimComposite; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CCPEOADPIFE_CDMNINLCING_OFFSET UNITYSDK_OFFSET(0xC752820)
#define CCPEOADPIFE_CTOR_OFFSET UNITYSDK_OFFSET(0xC752670)
#define CCPEOADPIFE_FFPADLLGGGM_OFFSET UNITYSDK_OFFSET(0xC7535A0)
#define CCPEOADPIFE_GHOPBCBAKLL_OFFSET UNITYSDK_OFFSET(0xC753700)
#define CCPEOADPIFE_IFGDGILLIDA_OFFSET UNITYSDK_OFFSET(0xC753410)
#define CCPEOADPIFE_KBHEDHNJELJ_OFFSET UNITYSDK_OFFSET(0xC753100)
#define CCPEOADPIFE_ODJGCPMMODC_OFFSET UNITYSDK_OFFSET(0xC752EE0)
#define CCPEOADPIFE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC7526C0)
#define CCPEOADPIFE_PCEOEAFCPML_OFFSET UNITYSDK_OFFSET(0xC753AC0)
#define CCPEOADPIFE_TICK_OFFSET UNITYSDK_OFFSET(0xC753A50)

inline static constexpr unsigned int CCPEOADPIFE_TypeDefinitionIndex = 58260;

	class CCPEOADPIFE
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* JDOGBEOGLEB; // 0x28
		::RPG::Client::TextID GICKMHAMHEH; // 0x30
		::System::Single CDIFKKNBPIM; // 0x40
		::System::UInt32 AALFEILIJPL; // 0x44
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::PlanetFesPlaySpinAnim* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::PlanetFesPlaySpinAnim*))((::PBYTE)hIl2Cpp + CCPEOADPIFE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPEOADPIFE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void CDMNINLCING()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPEOADPIFE_CDMNINLCING_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesAnimComposite* GHOPBCBAKLL(::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>* a1)
		{
			return ((::RPG::GameCore::PlanetFesAnimComposite*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*))((::PBYTE)hIl2Cpp + CCPEOADPIFE_GHOPBCBAKLL_OFFSET))(this, a1);
		}

		::System::Void ODJGCPMMODC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPEOADPIFE_ODJGCPMMODC_OFFSET))(this);
		}

		::System::Void KBHEDHNJELJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPEOADPIFE_KBHEDHNJELJ_OFFSET))(this);
		}

		::System::Void IFGDGILLIDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPEOADPIFE_IFGDGILLIDA_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CCPEOADPIFE_TICK_OFFSET))(this, a1);
		}

		::System::Boolean PCEOEAFCPML()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCPEOADPIFE_PCEOEAFCPML_OFFSET))(this);
		}

		::System::Boolean FFPADLLGGGM(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CCPEOADPIFE_FFPADLLGGGM_OFFSET))(this, a1);
		}

	};
