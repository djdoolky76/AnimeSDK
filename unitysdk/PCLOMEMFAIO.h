#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AISelector; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCLOMEMFAIO_CCTOR_OFFSET UNITYSDK_OFFSET(0xC0003E0)
#define PCLOMEMFAIO_CFDHBGOIABE_OFFSET UNITYSDK_OFFSET(0xBFFF8E0)
#define PCLOMEMFAIO_CNLOCGIGKIJ_OFFSET UNITYSDK_OFFSET(0xBFFF570)
#define PCLOMEMFAIO_EDLFFMOLNJF_OFFSET UNITYSDK_OFFSET(0xBFFE110)
#define PCLOMEMFAIO_EHNPLHKHAJJ_OFFSET UNITYSDK_OFFSET(0xBFFD390)
#define PCLOMEMFAIO_EIEJLJIJLDH_OFFSET UNITYSDK_OFFSET(0xBFFE990)
#define PCLOMEMFAIO_FFIACAIHJMD_OFFSET UNITYSDK_OFFSET(0xBFFDC90)
#define PCLOMEMFAIO_IOIMPGOMDLE_OFFSET UNITYSDK_OFFSET(0xBFFFE50)
#define PCLOMEMFAIO_LAJOKKCLDNL_OFFSET UNITYSDK_OFFSET(0xBFFE630)
#define PCLOMEMFAIO_LANLJEOFBOK_OFFSET UNITYSDK_OFFSET(0xBFFD150)
#define PCLOMEMFAIO_MBIOFIFBAIL_OFFSET UNITYSDK_OFFSET(0xBFFF010)
#define PCLOMEMFAIO_MCPCJMKGINM_OFFSET UNITYSDK_OFFSET(0xBFFD850)
#define PCLOMEMFAIO_MIDKKNAGOFA_OFFSET UNITYSDK_OFFSET(0xBFFCF20)
#define PCLOMEMFAIO_NPJKDPNPLAN_OFFSET UNITYSDK_OFFSET(0xBFFD760)

inline static constexpr unsigned int PCLOMEMFAIO_TypeDefinitionIndex = 54338;

	class PCLOMEMFAIO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_IEMKBKMJPEM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)UnitySDK::FromName("", "PCLOMEMFAIO")->GetStaticField(0x697E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCLOMEMFAIO_CCTOR_OFFSET))();
		}

		static ::System::Void MIDKKNAGOFA(::RPG::GameCore::AISelector* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::AISelector*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PCLOMEMFAIO_MIDKKNAGOFA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void LANLJEOFBOK(::RPG::GameCore::AISelector* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::AISelector*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PCLOMEMFAIO_LANLJEOFBOK_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void EHNPLHKHAJJ(::RPG::GameCore::AISelector* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::AISelector*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PCLOMEMFAIO_EHNPLHKHAJJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void NPJKDPNPLAN(::RPG::GameCore::AISelector* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::AISelector*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PCLOMEMFAIO_NPJKDPNPLAN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void MCPCJMKGINM(::RPG::GameCore::AISelector* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::AISelector*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PCLOMEMFAIO_MCPCJMKGINM_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void FFIACAIHJMD(::RPG::GameCore::AISelector* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::AISelector*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PCLOMEMFAIO_FFIACAIHJMD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void EDLFFMOLNJF(::RPG::GameCore::AISelector* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::AISelector*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PCLOMEMFAIO_EDLFFMOLNJF_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void LAJOKKCLDNL(::RPG::GameCore::AISelector* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::AISelector*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PCLOMEMFAIO_LAJOKKCLDNL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void EIEJLJIJLDH(::RPG::GameCore::AISelector* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::AISelector*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PCLOMEMFAIO_EIEJLJIJLDH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void MBIOFIFBAIL(::RPG::GameCore::AISelector* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::AISelector*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PCLOMEMFAIO_MBIOFIFBAIL_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CNLOCGIGKIJ(::RPG::GameCore::AISelector* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::AISelector*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PCLOMEMFAIO_CNLOCGIGKIJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void CFDHBGOIABE(::RPG::GameCore::AISelector* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::AISelector*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PCLOMEMFAIO_CFDHBGOIABE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void IOIMPGOMDLE(::RPG::GameCore::AISelector* a1, ::RPG::GameCore::TaskContext* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a3, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::AISelector*, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + PCLOMEMFAIO_IOIMPGOMDLE_OFFSET))(a1, a2, a3, a4);
		}

	};
