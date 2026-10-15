#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MockAnimator; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraSetAnimatorParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define FFIGLFDEMCK_CTOR_OFFSET UNITYSDK_OFFSET(0x157413E0)
#define FFIGLFDEMCK_DJOCMIMGDJM_OFFSET UNITYSDK_OFFSET(0x15741A30)
#define FFIGLFDEMCK_GGLEGADMNAH_OFFSET UNITYSDK_OFFSET(0x15741720)
#define FFIGLFDEMCK_KMFNKDMEJBC_OFFSET UNITYSDK_OFFSET(0x15741430)
#define FFIGLFDEMCK_MLIKMCHDMEN_OFFSET UNITYSDK_OFFSET(0x15741BF0)
#define FFIGLFDEMCK_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x15741470)

inline static constexpr unsigned int FFIGLFDEMCK_TypeDefinitionIndex = 78416;

	class FFIGLFDEMCK : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* PNMFAOJNNIC; // 0x10
		::RPG::GameCore::ChimeraSetAnimatorParam* IGHAHBNLIJA; // 0x18
		::RPG::Client::Promises::Promise* KKHPFDBFKHH; // 0x20
		::System::UInt32 AJLJMGEEKOJ; // 0x28
		::System::UInt32 NCBAPGKFFJA; // 0x2C
		::System::Void _ctor(::RPG::GameCore::ChimeraSetAnimatorParam* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraSetAnimatorParam*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + FFIGLFDEMCK_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::Promise* KMFNKDMEJBC()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIGLFDEMCK_KMFNKDMEJBC_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFIGLFDEMCK_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void GGLEGADMNAH(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + FFIGLFDEMCK_GGLEGADMNAH_OFFSET))(this, a1);
		}

		::System::Void MLIKMCHDMEN(::RPG::Client::MockAnimator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + FFIGLFDEMCK_MLIKMCHDMEN_OFFSET))(this, a1);
		}

		::System::Void DJOCMIMGDJM(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + FFIGLFDEMCK_DJOCMIMGDJM_OFFSET))(this, a1);
		}

	};
