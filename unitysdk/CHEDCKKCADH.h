#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame::FiveDim { template <typename T> class PhantomPlayerFrameData_1; }

#define CHEDCKKCADH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B6670)
#define CHEDCKKCADH_GAFAJGPHHEP_OFFSET UNITYSDK_OFFSET(0x1C8B6470)

inline static constexpr unsigned int CHEDCKKCADH_TypeDefinitionIndex = 43584;

	class CHEDCKKCADH : public ::System::Object
	{
	public:
		// static const ::System::String* MEMFBMKOBFN; // 0x0
		// static const ::System::String* MCPEOEHMALP; // 0x0
		// static const ::System::String* CJLGKKEMOIM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEDCKKCADH_CTOR_OFFSET))(this);
		}

		static ::System::Boolean GAFAJGPHHEP(::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameData_1<::System::Boolean>* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameData_1<::System::Boolean>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CHEDCKKCADH_GAFAJGPHHEP_OFFSET))(a1, a2, a3, a4);
		}

	};
