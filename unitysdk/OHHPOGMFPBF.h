#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OHHPOGMFPBF_CTOR_OFFSET UNITYSDK_OFFSET(0xC726430)
#define OHHPOGMFPBF_GLCKDFOBJEI_OFFSET UNITYSDK_OFFSET(0xC726350)

inline static constexpr unsigned int OHHPOGMFPBF_TypeDefinitionIndex = 55922;

	class OHHPOGMFPBF : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* CGDCONMACEN; // 0x10
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* GADBIAEMPJP; // 0x18
		::KFELGAIGHAP* CKDILGNFENJ; // 0x20
		::System::Int32 EDBJPAPMNLO; // 0x28
		::System::UInt32 GIIMOAOFKOM; // 0x2C
		::System::Int32 KBAPBCNJHDB; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHPOGMFPBF_CTOR_OFFSET))(this);
		}

		::System::Void GLCKDFOBJEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHPOGMFPBF_GLCKDFOBJEI_OFFSET))(this);
		}

	};
