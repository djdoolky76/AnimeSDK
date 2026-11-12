#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class GIDMPPHIGIA;
class INMMPMDELKE;
class MNCOPNHONHO;
namespace RPG::GameCore { class FourRotateVoxelLevelEnvConfig; }

#define ABCEEGOBDCL_AJLEJDGNGGH_OFFSET UNITYSDK_OFFSET(0xB7502C0)
#define ABCEEGOBDCL_BFAMDMJLIJM_OFFSET UNITYSDK_OFFSET(0xB74EF00)
#define ABCEEGOBDCL_CTOR_OFFSET UNITYSDK_OFFSET(0xB74E920)
#define ABCEEGOBDCL_EFFNKJDBDIB_OFFSET UNITYSDK_OFFSET(0xB74FEB0)
#define ABCEEGOBDCL_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB74E970)
#define ABCEEGOBDCL_IGGNPMPKBOD_OFFSET UNITYSDK_OFFSET(0xB74ED20)
#define ABCEEGOBDCL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB74E930)
#define ABCEEGOBDCL_NAIMMCPHJGH_OFFSET UNITYSDK_OFFSET(0xB7501A0)
#define ABCEEGOBDCL_OGCDKOCHKNE_OFFSET UNITYSDK_OFFSET(0xB74E9D0)

inline static constexpr unsigned int ABCEEGOBDCL_TypeDefinitionIndex = 79147;

	class ABCEEGOBDCL : public ::System::Object
	{
	public:
		::MNCOPNHONHO* PDENFEFCAGN; // 0x10
		::BABNOKHOBCF* FKINCGODJEP; // 0x18
		::System::Boolean AAHNIKAOMJB; // 0x20
		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + ABCEEGOBDCL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCEEGOBDCL_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCEEGOBDCL_EXECUTE_OFFSET))(this);
		}

		::System::Boolean OGCDKOCHKNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCEEGOBDCL_OGCDKOCHKNE_OFFSET))(this);
		}

		::System::Void IGGNPMPKBOD(::GIDMPPHIGIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDMPPHIGIA*))((::PBYTE)hIl2Cpp + ABCEEGOBDCL_IGGNPMPKBOD_OFFSET))(this, a1);
		}

		::System::Void NAIMMCPHJGH(::GIDMPPHIGIA* a1, ::System::Int32 a2, ::RPG::GameCore::FourRotateVoxelLevelEnvConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GIDMPPHIGIA*, ::System::Int32, ::RPG::GameCore::FourRotateVoxelLevelEnvConfig*))((::PBYTE)hIl2Cpp + ABCEEGOBDCL_NAIMMCPHJGH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AJLEJDGNGGH(::GIDMPPHIGIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDMPPHIGIA*))((::PBYTE)hIl2Cpp + ABCEEGOBDCL_AJLEJDGNGGH_OFFSET))(this, a1);
		}

		::INMMPMDELKE* BFAMDMJLIJM(::INMMPMDELKE* a1)
		{
			return ((::INMMPMDELKE*(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + ABCEEGOBDCL_BFAMDMJLIJM_OFFSET))(this, a1);
		}

		::System::Void EFFNKJDBDIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCEEGOBDCL_EFFNKJDBDIB_OFFSET))(this);
		}

	};
