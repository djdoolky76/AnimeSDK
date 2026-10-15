#pragma once
#include "unitysdk/unitysdk.h"
class BIBPEJPAMFP;
class CFJDNIMHGOG;
namespace RPG::GameCore { class SetWeatherUI; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TemperatureWeatherItemConfig; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHOPKPJKCBP_CFPJGCNJFEE_OFFSET UNITYSDK_OFFSET(0xB6C0110)
#define LHOPKPJKCBP_CTOR_OFFSET UNITYSDK_OFFSET(0xB6BFD50)
#define LHOPKPJKCBP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6BFE30)
#define LHOPKPJKCBP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB6BFE70)
#define LHOPKPJKCBP_PPNFOMMOCMN_OFFSET UNITYSDK_OFFSET(0xB6BFED0)

inline static constexpr unsigned int LHOPKPJKCBP_TypeDefinitionIndex = 55597;

	class LHOPKPJKCBP
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* DEKGAJLHDGE; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetWeatherUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetWeatherUI*))((::PBYTE)hIl2Cpp + LHOPKPJKCBP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOPKPJKCBP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOPKPJKCBP_ONTASKBEGIN_OFFSET))(this);
		}

		::CFJDNIMHGOG* PPNFOMMOCMN()
		{
			return ((::CFJDNIMHGOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOPKPJKCBP_PPNFOMMOCMN_OFFSET))(this);
		}

		::BIBPEJPAMFP* CFPJGCNJFEE(::RPG::GameCore::TemperatureWeatherItemConfig* a1)
		{
			return ((::BIBPEJPAMFP*(*)(::PVOID, ::RPG::GameCore::TemperatureWeatherItemConfig*))((::PBYTE)hIl2Cpp + LHOPKPJKCBP_CFPJGCNJFEE_OFFSET))(this, a1);
		}

	};
