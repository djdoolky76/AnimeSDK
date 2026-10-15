#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LoadingStratageConfigRow; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define FJMOIMNDLFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x157DA880)
#define FJMOIMNDLFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x157DA8B0)
#define FJMOIMNDLFM___C___SELECTLOADINGSTRATEGYBYCONDITION_B__7_0_OFFSET UNITYSDK_OFFSET(0x157DA8C0)

inline static constexpr unsigned int FJMOIMNDLFM___c_TypeDefinitionIndex = 60464;

	class FJMOIMNDLFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DB70);
		}

		static ::System::Comparison_1<::RPG::GameCore::LoadingStratageConfigRow*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::LoadingStratageConfigRow*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DB78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJMOIMNDLFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJMOIMNDLFM___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SelectLoadingStrategyByCondition_b__7_0(::RPG::GameCore::LoadingStratageConfigRow* a1, ::RPG::GameCore::LoadingStratageConfigRow* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LoadingStratageConfigRow*, ::RPG::GameCore::LoadingStratageConfigRow*))((::PBYTE)hIl2Cpp + FJMOIMNDLFM___C___SELECTLOADINGSTRATEGYBYCONDITION_B__7_0_OFFSET))(this, a1, a2);
		}

	};
