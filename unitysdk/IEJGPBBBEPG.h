#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/MJKLAEILHPK.h"
class CEJIKJKEBDL;
class KFELGAIGHAP;
class PPEJPEMHNAO;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IEJGPBBBEPG_CTOR_OFFSET UNITYSDK_OFFSET(0x16E692D0)
#define IEJGPBBBEPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16E69B90)
#define IEJGPBBBEPG_ENKPBJKDGOB_OFFSET UNITYSDK_OFFSET(0x16E69FE0)
#define IEJGPBBBEPG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x16E69DE0)
#define IEJGPBBBEPG_GFMPAHIOGNH_OFFSET UNITYSDK_OFFSET(0x16E69620)
#define IEJGPBBBEPG_GKIAABAJIEG_OFFSET UNITYSDK_OFFSET(0x16E69560)
#define IEJGPBBBEPG_INJAFKILCKC_OFFSET UNITYSDK_OFFSET(0x16E6A320)
#define IEJGPBBBEPG_JLENCICKOOL_OFFSET UNITYSDK_OFFSET(0x16E69AE0)
#define IEJGPBBBEPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16E69460)
#define IEJGPBBBEPG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16E69A50)
#define IEJGPBBBEPG_TICK_OFFSET UNITYSDK_OFFSET(0x16E69730)

inline static constexpr unsigned int IEJGPBBBEPG_TypeDefinitionIndex = 53641;

	class IEJGPBBBEPG : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::KFELGAIGHAP*>* ANCNIBMHPLD; // 0x18
		::PPEJPEMHNAO* NJNNCOCIGCC; // 0x20
		::MJKLAEILHPK OLMFJLICIIA; // 0x28
		::CEJIKJKEBDL* IGHAHBNLIJA; // 0x58
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x60
		::System::Boolean GELAAMHNHPC; // 0x68
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CEJIKJKEBDL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CEJIKJKEBDL*))((::PBYTE)hIl2Cpp + IEJGPBBBEPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJGPBBBEPG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IEJGPBBBEPG_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJGPBBBEPG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJGPBBBEPG_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJGPBBBEPG_GETCONFIG_OFFSET))(this);
		}

		::System::Void ENKPBJKDGOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEJGPBBBEPG_ENKPBJKDGOB_OFFSET))(this, a1);
		}

		::System::Void JLENCICKOOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJGPBBBEPG_JLENCICKOOL_OFFSET))(this);
		}

		::System::Void GFMPAHIOGNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IEJGPBBBEPG_GFMPAHIOGNH_OFFSET))(this, a1);
		}

		::System::Void INJAFKILCKC(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + IEJGPBBBEPG_INJAFKILCKC_OFFSET))(this, a1);
		}

		::PPEJPEMHNAO* GKIAABAJIEG()
		{
			return ((::PPEJPEMHNAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJGPBBBEPG_GKIAABAJIEG_OFFSET))(this);
		}

	};
