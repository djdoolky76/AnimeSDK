#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALMFLCJCHKP;
class LMFOOOLDECA;
class OMNJCDDMLHI;
namespace Entitas { template <typename T> class IGroup_1; }

#define NIOOIMFLHDC_CNAPIGDLAAN_OFFSET UNITYSDK_OFFSET(0xC4E9B40)
#define NIOOIMFLHDC_CNKCIHBHJGI_OFFSET UNITYSDK_OFFSET(0xC4E94B0)
#define NIOOIMFLHDC_CTOR_OFFSET UNITYSDK_OFFSET(0xC4E8AE0)
#define NIOOIMFLHDC_DOFPLLNLBIJ_OFFSET UNITYSDK_OFFSET(0xC4E9510)
#define NIOOIMFLHDC_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC4E8AF0)
#define NIOOIMFLHDC_FKJAIHCPMAM_OFFSET UNITYSDK_OFFSET(0xC4E9E20)
#define NIOOIMFLHDC_PFLPCNPMKBD_OFFSET UNITYSDK_OFFSET(0xC4EA1B0)

inline static constexpr unsigned int NIOOIMFLHDC_TypeDefinitionIndex = 80704;

	class NIOOIMFLHDC : public ::System::Object
	{
	public:
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x10
		::LMFOOOLDECA* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + NIOOIMFLHDC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOOIMFLHDC_EXECUTE_OFFSET))(this);
		}

		::System::Void CNKCIHBHJGI(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + NIOOIMFLHDC_CNKCIHBHJGI_OFFSET))(this, a1);
		}

		::System::Void FKJAIHCPMAM(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + NIOOIMFLHDC_FKJAIHCPMAM_OFFSET))(this, a1);
		}

		::System::Void DOFPLLNLBIJ(::Entitas::IGroup_1<::ALMFLCJCHKP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::ALMFLCJCHKP*>*))((::PBYTE)hIl2Cpp + NIOOIMFLHDC_DOFPLLNLBIJ_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2Int PFLPCNPMKBD(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NIOOIMFLHDC_PFLPCNPMKBD_OFFSET))(this, a1);
		}

		::System::Void CNAPIGDLAAN(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + NIOOIMFLHDC_CNAPIGDLAAN_OFFSET))(this, a1);
		}

	};
