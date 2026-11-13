#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelCameraDirectionMask.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class DNFFEFPKDPC;
class INMMPMDELKE;
class MNCOPNHONHO;

#define BKILENGMDPE_BBNOOOCOPLJ_1_OFFSET UNITYSDK_OFFSET(0x1A665AC0)
#define BKILENGMDPE_BBNOOOCOPLJ_OFFSET UNITYSDK_OFFSET(0x1A665A40)
#define BKILENGMDPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A6659C0)
#define BKILENGMDPE_EDECKALMOCP_OFFSET UNITYSDK_OFFSET(0x1A665C10)
#define BKILENGMDPE_EEKLIDKIPLH_OFFSET UNITYSDK_OFFSET(0x1A666220)
#define BKILENGMDPE_HFADKIMEFKK_OFFSET UNITYSDK_OFFSET(0x1A6661B0)
#define BKILENGMDPE_HIBMHKJONGD_1_OFFSET UNITYSDK_OFFSET(0x1A665E30)
#define BKILENGMDPE_HIBMHKJONGD_OFFSET UNITYSDK_OFFSET(0x1A665D70)
#define BKILENGMDPE_JBEKPDNMGBN_OFFSET UNITYSDK_OFFSET(0x1A6659D0)
#define BKILENGMDPE_KDKGLIOCPAP_OFFSET UNITYSDK_OFFSET(0x1A666050)
#define BKILENGMDPE_OPKIAFLPGAM_OFFSET UNITYSDK_OFFSET(0x1A665F40)

inline static constexpr unsigned int BKILENGMDPE_TypeDefinitionIndex = 79032;

	class BKILENGMDPE : public ::System::Object
	{
	public:
		::BABNOKHOBCF* FKINCGODJEP; // 0x10
		::MNCOPNHONHO* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::MNCOPNHONHO* a1, ::BABNOKHOBCF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MNCOPNHONHO*, ::BABNOKHOBCF*))((::PBYTE)hIl2Cpp + BKILENGMDPE_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FourRotateVoxelCameraDirectionMask JBEKPDNMGBN()
		{
			return ((::RPG::GameCore::FourRotateVoxelCameraDirectionMask(*)(::PVOID))((::PBYTE)hIl2Cpp + BKILENGMDPE_JBEKPDNMGBN_OFFSET))(this);
		}

		::System::Boolean BBNOOOCOPLJ(::INMMPMDELKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + BKILENGMDPE_BBNOOOCOPLJ_OFFSET))(this, a1);
		}

		::System::Boolean BBNOOOCOPLJ_1(::INMMPMDELKE* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::System::Int32))((::PBYTE)hIl2Cpp + BKILENGMDPE_BBNOOOCOPLJ_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean EDECKALMOCP(::INMMPMDELKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + BKILENGMDPE_EDECKALMOCP_OFFSET))(this, a1);
		}

		::System::Boolean HIBMHKJONGD(::DNFFEFPKDPC* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*, ::System::Int32))((::PBYTE)hIl2Cpp + BKILENGMDPE_HIBMHKJONGD_OFFSET))(this, a1, a2);
		}

		::System::Boolean HIBMHKJONGD_1(::DNFFEFPKDPC* a1, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask))((::PBYTE)hIl2Cpp + BKILENGMDPE_HIBMHKJONGD_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean OPKIAFLPGAM(::DNFFEFPKDPC* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*, ::System::Int32))((::PBYTE)hIl2Cpp + BKILENGMDPE_OPKIAFLPGAM_OFFSET))(this, a1, a2);
		}

		::System::Boolean KDKGLIOCPAP(::INMMPMDELKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + BKILENGMDPE_KDKGLIOCPAP_OFFSET))(this, a1);
		}

		::System::Boolean EEKLIDKIPLH(::DNFFEFPKDPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFFEFPKDPC*))((::PBYTE)hIl2Cpp + BKILENGMDPE_EEKLIDKIPLH_OFFSET))(this, a1);
		}

		::RPG::GameCore::FourRotateVoxelCameraDirectionMask HFADKIMEFKK()
		{
			return ((::RPG::GameCore::FourRotateVoxelCameraDirectionMask(*)(::PVOID))((::PBYTE)hIl2Cpp + BKILENGMDPE_HFADKIMEFKK_OFFSET))(this);
		}

	};
