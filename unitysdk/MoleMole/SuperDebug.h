#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SuperDebug_LogModule.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LogType.h"
#include "unitysdk/FBHIKNMOHCG.h"
#include "unitysdk/MoleMole/SuperDebug___c__DisplayClass102_0.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CHKEGIGCOAN;
class GMDFPBGPJDK;
namespace System { class Exception; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_SUPERDEBUG_ASSERTTHROW_OFFSET UNITYSDK_OFFSET(0x1EA82A90)
#define MOLEMOLE_SUPERDEBUG_ASSERT_OFFSET UNITYSDK_OFFSET(0x1EA829E0)
#define MOLEMOLE_SUPERDEBUG_CLOSEALLDEBUGS_OFFSET UNITYSDK_OFFSET(0x1EA83340)
#define MOLEMOLE_SUPERDEBUG_DEBUGLOCALCUBE_OFFSET UNITYSDK_OFFSET(0x1EA87620)
#define MOLEMOLE_SUPERDEBUG_DEBUGPOINT_OFFSET UNITYSDK_OFFSET(0x1EA87490)
#define MOLEMOLE_SUPERDEBUG_DELETECATEGORYINWINDOW_OFFSET UNITYSDK_OFFSET(0x1EA80220)
#define MOLEMOLE_SUPERDEBUG_DELETELOGINWINDOW_OFFSET UNITYSDK_OFFSET(0x1EA80300)
#define MOLEMOLE_SUPERDEBUG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EA84440)
#define MOLEMOLE_SUPERDEBUG_DRAWARROW_1_OFFSET UNITYSDK_OFFSET(0x1EA85F70)
#define MOLEMOLE_SUPERDEBUG_DRAWARROW_OFFSET UNITYSDK_OFFSET(0x1EA85D40)
#define MOLEMOLE_SUPERDEBUG_DRAWCIRCLE_OFFSET UNITYSDK_OFFSET(0x1EA864E0)
#define MOLEMOLE_SUPERDEBUG_DRAWCYLINDER_OFFSET UNITYSDK_OFFSET(0x1EA86A60)
#define MOLEMOLE_SUPERDEBUG_DRAWDEBUGCAPSULEFROMDETECT_OFFSET UNITYSDK_OFFSET(0x1EA86640)
#define MOLEMOLE_SUPERDEBUG_DRAWDEBUGCAPSULE_1_OFFSET UNITYSDK_OFFSET(0x1EA86D50)
#define MOLEMOLE_SUPERDEBUG_DRAWDEBUGCAPSULE_OFFSET UNITYSDK_OFFSET(0x1EA86B80)
#define MOLEMOLE_SUPERDEBUG_DRAWDEBUGCUBEFROMDETECT_OFFSET UNITYSDK_OFFSET(0x1EA86E50)
#define MOLEMOLE_SUPERDEBUG_DRAWDEBUGCUBE_1_OFFSET UNITYSDK_OFFSET(0x1EA87320)
#define MOLEMOLE_SUPERDEBUG_DRAWDEBUGCUBE_OFFSET UNITYSDK_OFFSET(0x1EA870F0)
#define MOLEMOLE_SUPERDEBUG_DRAWDEBUGCYLINDERFROMDETECT_OFFSET UNITYSDK_OFFSET(0x1EA86850)
#define MOLEMOLE_SUPERDEBUG_DRAWFAN_OFFSET UNITYSDK_OFFSET(0x1EA860B0)
#define MOLEMOLE_SUPERDEBUG_DRAWLINEARROW_OFFSET UNITYSDK_OFFSET(0x1EA85280)
#define MOLEMOLE_SUPERDEBUG_DRAWLINEFROMDETECT_OFFSET UNITYSDK_OFFSET(0x1EA84890)
#define MOLEMOLE_SUPERDEBUG_DRAWLINE_1_OFFSET UNITYSDK_OFFSET(0x1EA84F70)
#define MOLEMOLE_SUPERDEBUG_DRAWLINE_OFFSET UNITYSDK_OFFSET(0x1EA84BD0)
#define MOLEMOLE_SUPERDEBUG_DRAWSPHERE_1_OFFSET UNITYSDK_OFFSET(0x1EA86410)
#define MOLEMOLE_SUPERDEBUG_DRAWSPHERE_OFFSET UNITYSDK_OFFSET(0x1EA86270)
#define MOLEMOLE_SUPERDEBUG_DRAWTEXT_OFFSET UNITYSDK_OFFSET(0x1EA877E0)
#define MOLEMOLE_SUPERDEBUG_ENABLEALLFLAG_OFFSET UNITYSDK_OFFSET(0x1EA84130)
#define MOLEMOLE_SUPERDEBUG_FORMATLOGSTRING_1_OFFSET UNITYSDK_OFFSET(0x1EA82870)
#define MOLEMOLE_SUPERDEBUG_FORMATLOGSTRING_OFFSET UNITYSDK_OFFSET(0x1EA827E0)
#define MOLEMOLE_SUPERDEBUG_GETSWITCHFLAG_OFFSET UNITYSDK_OFFSET(0x1EA804A0)
#define MOLEMOLE_SUPERDEBUG_GET_DRAWDEBUGLINE_OFFSET UNITYSDK_OFFSET(0x1EA80970)
#define MOLEMOLE_SUPERDEBUG_GET_IMPL_OFFSET UNITYSDK_OFFSET(0x1EA83690)
#define MOLEMOLE_SUPERDEBUG_INITDEBUGSWITCH_OFFSET UNITYSDK_OFFSET(0x1EA83840)
#define MOLEMOLE_SUPERDEBUG_INIT_OFFSET UNITYSDK_OFFSET(0x1EA83740)
#define MOLEMOLE_SUPERDEBUG_ISERRORLOGGINGENABLED_OFFSET UNITYSDK_OFFSET(0x1EA80AE0)
#define MOLEMOLE_SUPERDEBUG_ISSWITCHON_OFFSET UNITYSDK_OFFSET(0x1EA803E0)
#define MOLEMOLE_SUPERDEBUG_ISUSELOGWIN_OFFSET UNITYSDK_OFFSET(0x1EA80B20)
#define MOLEMOLE_SUPERDEBUG_LINE_OFFSET UNITYSDK_OFFSET(0x1EA844F0)
#define MOLEMOLE_SUPERDEBUG_LOGALLERROR_OFFSET UNITYSDK_OFFSET(0x1EA81250)
#define MOLEMOLE_SUPERDEBUG_LOGASSERTION_OFFSET UNITYSDK_OFFSET(0x1EA824C0)
#define MOLEMOLE_SUPERDEBUG_LOGERRORFORMAT_OFFSET UNITYSDK_OFFSET(0x1EA81F30)
#define MOLEMOLE_SUPERDEBUG_LOGERRORINWINDOW_1_OFFSET UNITYSDK_OFFSET(0x1EA7FF80)
#define MOLEMOLE_SUPERDEBUG_LOGERRORINWINDOW_OFFSET UNITYSDK_OFFSET(0x1EA7FDF0)
#define MOLEMOLE_SUPERDEBUG_LOGERRORWITHOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1EA820A0)
#define MOLEMOLE_SUPERDEBUG_LOGERRORWITHOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1EA82150)
#define MOLEMOLE_SUPERDEBUG_LOGERRORWITHOBJECT_OFFSET UNITYSDK_OFFSET(0x1EA81FE0)
#define MOLEMOLE_SUPERDEBUG_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0x1EA81DC0)
#define MOLEMOLE_SUPERDEBUG_LOGERROR_2_OFFSET UNITYSDK_OFFSET(0x1EA81E70)
#define MOLEMOLE_SUPERDEBUG_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1EA81C90)
#define MOLEMOLE_SUPERDEBUG_LOGEXCEPTIONINWINDOW_1_OFFSET UNITYSDK_OFFSET(0x1EA80170)
#define MOLEMOLE_SUPERDEBUG_LOGEXCEPTIONINWINDOW_OFFSET UNITYSDK_OFFSET(0x1EA7FFE0)
#define MOLEMOLE_SUPERDEBUG_LOGEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x1EA82420)
#define MOLEMOLE_SUPERDEBUG_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EA82220)
#define MOLEMOLE_SUPERDEBUG_LOGFILE_OFFSET UNITYSDK_OFFSET(0x1EA81300)
#define MOLEMOLE_SUPERDEBUG_LOGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1EA80D90)
#define MOLEMOLE_SUPERDEBUG_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1EA80CF0)
#define MOLEMOLE_SUPERDEBUG_LOGINFO_OFFSET UNITYSDK_OFFSET(0x1EA80ED0)
#define MOLEMOLE_SUPERDEBUG_LOGINWINDOW_1_OFFSET UNITYSDK_OFFSET(0x1EA7F9A0)
#define MOLEMOLE_SUPERDEBUG_LOGINWINDOW_OFFSET UNITYSDK_OFFSET(0x1EA7F610)
#define MOLEMOLE_SUPERDEBUG_LOGNAVMESHASYNC_OFFSET UNITYSDK_OFFSET(0x1EA81030)
#define MOLEMOLE_SUPERDEBUG_LOGPROTO_OFFSET UNITYSDK_OFFSET(0x1EA811C0)
#define MOLEMOLE_SUPERDEBUG_LOGWARNINGFILE_OFFSET UNITYSDK_OFFSET(0x1EA81AA0)
#define MOLEMOLE_SUPERDEBUG_LOGWARNINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1EA818B0)
#define MOLEMOLE_SUPERDEBUG_LOGWARNINGINWINDOW_1_OFFSET UNITYSDK_OFFSET(0x1EA7FD90)
#define MOLEMOLE_SUPERDEBUG_LOGWARNINGINWINDOW_OFFSET UNITYSDK_OFFSET(0x1EA7FA00)
#define MOLEMOLE_SUPERDEBUG_LOGWARNINGWITHOBJECT_OFFSET UNITYSDK_OFFSET(0x1EA819E0)
#define MOLEMOLE_SUPERDEBUG_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0x1EA81800)
#define MOLEMOLE_SUPERDEBUG_LOGWARNING_2_OFFSET UNITYSDK_OFFSET(0x1EA81940)
#define MOLEMOLE_SUPERDEBUG_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1EA81770)
#define MOLEMOLE_SUPERDEBUG_LOGWITHOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1EA815F0)
#define MOLEMOLE_SUPERDEBUG_LOGWITHOBJECT_2_OFFSET UNITYSDK_OFFSET(0x1EA816C0)
#define MOLEMOLE_SUPERDEBUG_LOGWITHOBJECT_OFFSET UNITYSDK_OFFSET(0x1EA81530)
#define MOLEMOLE_SUPERDEBUG_LOG_1_OFFSET UNITYSDK_OFFSET(0x1EA80E20)
#define MOLEMOLE_SUPERDEBUG_LOG_2_OFFSET UNITYSDK_OFFSET(0x1EA80F90)
#define MOLEMOLE_SUPERDEBUG_LOG_OFFSET UNITYSDK_OFFSET(0x1EA80C60)
#define MOLEMOLE_SUPERDEBUG_RESETLOGMODULEHELPER_OFFSET UNITYSDK_OFFSET(0x1EA806B0)
#define MOLEMOLE_SUPERDEBUG_SETDEBUGSWITCHFLAG_OFFSET UNITYSDK_OFFSET(0x1EA83E10)
#define MOLEMOLE_SUPERDEBUG_SETLOGENABLED_OFFSET UNITYSDK_OFFSET(0x1EA805F0)
#define MOLEMOLE_SUPERDEBUG_TIMEEND_OFFSET UNITYSDK_OFFSET(0x1EA83510)
#define MOLEMOLE_SUPERDEBUG_TIMESTART_OFFSET UNITYSDK_OFFSET(0x1EA83470)
#define MOLEMOLE_SUPERDEBUG_TRANSFORMBYPIXEL_1_OFFSET UNITYSDK_OFFSET(0x1EA87C90)
#define MOLEMOLE_SUPERDEBUG_TRANSFORMBYPIXEL_OFFSET UNITYSDK_OFFSET(0x1EA87B50)
#define MOLEMOLE_SUPERDEBUG_UPDATEFRAME_OFFSET UNITYSDK_OFFSET(0x1EA80A60)
#define MOLEMOLE_SUPERDEBUG_VERYIMPORTANTASSERT_1_OFFSET UNITYSDK_OFFSET(0x1EA83180)
#define MOLEMOLE_SUPERDEBUG_VERYIMPORTANTASSERT_OFFSET UNITYSDK_OFFSET(0x1EA82FF0)
#define MOLEMOLE_SUPERDEBUG_VERYIMPORTANTERROR_1_OFFSET UNITYSDK_OFFSET(0x1EA82D80)
#define MOLEMOLE_SUPERDEBUG_VERYIMPORTANTERROR_OFFSET UNITYSDK_OFFSET(0x1EA82BE0)
#define MOLEMOLE_SUPERDEBUG_VERYIMPORTANTLOG_OFFSET UNITYSDK_OFFSET(0x1EA82B40)
#define MOLEMOLE_SUPERDEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA806F0)
#define MOLEMOLE_SUPERDEBUG__INITDEBUGSWITCH_G__SETDEBUGSWITCH_101_0_OFFSET UNITYSDK_OFFSET(0x1EA839A0)
#define MOLEMOLE_SUPERDEBUG__LOGERROR_OFFSET UNITYSDK_OFFSET(0x1EA81D20)
#define MOLEMOLE_SUPERDEBUG__LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EA822B0)
#define MOLEMOLE_SUPERDEBUG__LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1EA7FC00)
#define MOLEMOLE_SUPERDEBUG__LOG_OFFSET UNITYSDK_OFFSET(0x1EA7F810)
#define MOLEMOLE_SUPERDEBUG__PRINT_OFFSET UNITYSDK_OFFSET(0x1EA82580)
#define MOLEMOLE_SUPERDEBUG__SETDEBUGSWITCHFLAG_G__SAVEPREFS_102_0_OFFSET UNITYSDK_OFFSET(0x1EA840A0)
#define MOLEMOLE_SUPERDEBUG___PRINT_G__DEBUGLOGWARNING_80_1_OFFSET UNITYSDK_OFFSET(0x1EA87DF0)
#define MOLEMOLE_SUPERDEBUG___PRINT_G__DEBUGLOG_80_0_OFFSET UNITYSDK_OFFSET(0x1EA87DE0)

namespace MoleMole
{
	inline static constexpr unsigned int SuperDebug_TypeDefinitionIndex = 7951;

	class SuperDebug : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Boolean>** StaticGet_DEBUG_SWITCH()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x6750);
		}
		static ::Il2CppArray<::System::Boolean>** StaticGet_LogFile_Switch()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x6758);
		}
		static ::System::String** StaticGet_debugLabel()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x6760);
		}
		static ::System::Action_3<::UnityEngine::LogType, ::System::String*, ::UnityEngine::Object*>** StaticGet__bufferLog()
		{
			return (::System::Action_3<::UnityEngine::LogType, ::System::String*, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x6768);
		}
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_FillEntityAttachPattern()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x6770);
		}
		static ::UnityEngine::GUIStyle** StaticGet__guiStyle()
		{
			return (::UnityEngine::GUIStyle**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x6778);
		}
		static ::GMDFPBGPJDK** StaticGet__impl()
		{
			return (::GMDFPBGPJDK**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x6780);
		}
		static ::Il2CppArray<::UnityEngine::Color>** StaticGet__Colors()
		{
			return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x6788);
		}
		static ::System::Action_2<::System::String*, ::System::String*>** StaticGet_sendToServerAction()
		{
			return (::System::Action_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x6790);
		}
		static ::System::Boolean* StaticGet_showHitWallLine()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x34F0);
		}
		static ::System::Boolean* StaticGet_showCheckLine()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x34F1);
		}
		static ::System::Boolean* StaticGet_showDebugFinalVelocity()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x34F2);
		}
		static ::System::Boolean* StaticGet__aiJobActive()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x34F3);
		}
		static ::System::Int32* StaticGet_CurFrameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x34F4);
		}
		static ::System::Single* StaticGet_detectBoundsContinueDuration()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x34F8);
		}
		static ::System::Single* StaticGet_detectBoundsWinkLineDuration()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x34FC);
		}
		static ::UnityEngine::Color* StaticGet_detectBoundsContinueLineColorPre()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3500);
		}
		static ::UnityEngine::Color* StaticGet_detectBoundsContinueLineColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3510);
		}
		static ::UnityEngine::Color* StaticGet_detectBoundsWinkLineColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3520);
		}
		static ::System::Boolean* StaticGet__isInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3530);
		}
		static ::System::DateTime* StaticGet_startTime()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3538);
		}
		static ::UnityEngine::Color* StaticGet_detectBoundsWinkLineColorPre()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3540);
		}
		static ::System::Boolean* StaticGet_enablePredicateDebugDraw()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3550);
		}
		static ::System::Boolean* StaticGet_showTextureDetectRange()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3551);
		}
		static ::System::Boolean* StaticGet_enableZoneDebugDraw()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3552);
		}
		static ::System::Boolean* StaticGet_showDebugLine()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_TypeDefinitionIndex)->GetStaticField(0x3553);
		}
		// static const ::System::String* NavMeshAsyncLogPrefix; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG__CCTOR_OFFSET))();
		}

		static ::System::Void LogInWindow(::MoleMole::SuperDebug_LogModule module, ::System::String* key, ::System::Object* value, ::UnityEngine::Object* go, ::Il2CppArray<::CHKEGIGCOAN*>* options)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::CHKEGIGCOAN*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGINWINDOW_OFFSET))(module, key, value, go, options);
		}

		static ::System::Void LogInWindow_1(::System::String* key, ::System::Object* value, ::UnityEngine::Object* go, ::Il2CppArray<::CHKEGIGCOAN*>* options)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::CHKEGIGCOAN*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGINWINDOW_1_OFFSET))(key, value, go, options);
		}

		static ::System::Void LogWarningInWindow(::MoleMole::SuperDebug_LogModule module, ::System::String* key, ::System::Object* value, ::UnityEngine::Object* go, ::Il2CppArray<::CHKEGIGCOAN*>* options)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::CHKEGIGCOAN*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWARNINGINWINDOW_OFFSET))(module, key, value, go, options);
		}

		static ::System::Void LogWarningInWindow_1(::System::String* key, ::System::Object* value, ::UnityEngine::Object* go, ::Il2CppArray<::CHKEGIGCOAN*>* options)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::CHKEGIGCOAN*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWARNINGINWINDOW_1_OFFSET))(key, value, go, options);
		}

		static ::System::Void LogErrorInWindow(::MoleMole::SuperDebug_LogModule module, ::System::String* key, ::System::Object* value, ::UnityEngine::Object* go, ::Il2CppArray<::CHKEGIGCOAN*>* options)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::CHKEGIGCOAN*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERRORINWINDOW_OFFSET))(module, key, value, go, options);
		}

		static ::System::Void LogErrorInWindow_1(::System::String* key, ::System::Object* value, ::UnityEngine::Object* go, ::Il2CppArray<::CHKEGIGCOAN*>* options)
		{
			return ((::System::Void(*)(::System::String*, ::System::Object*, ::UnityEngine::Object*, ::Il2CppArray<::CHKEGIGCOAN*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERRORINWINDOW_1_OFFSET))(key, value, go, options);
		}

		static ::System::Void LogExceptionInWindow(::MoleMole::SuperDebug_LogModule module, ::System::String* key, ::System::Exception* value, ::UnityEngine::Object* go, ::Il2CppArray<::CHKEGIGCOAN*>* options)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::System::Exception*, ::UnityEngine::Object*, ::Il2CppArray<::CHKEGIGCOAN*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGEXCEPTIONINWINDOW_OFFSET))(module, key, value, go, options);
		}

		static ::System::Void LogExceptionInWindow_1(::System::String* key, ::System::Exception* value, ::UnityEngine::Object* go, ::Il2CppArray<::CHKEGIGCOAN*>* options)
		{
			return ((::System::Void(*)(::System::String*, ::System::Exception*, ::UnityEngine::Object*, ::Il2CppArray<::CHKEGIGCOAN*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGEXCEPTIONINWINDOW_1_OFFSET))(key, value, go, options);
		}

		static ::System::Void DeleteCategoryInWindow(::MoleMole::SuperDebug_LogModule categoryKey)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DELETECATEGORYINWINDOW_OFFSET))(categoryKey);
		}

		static ::System::Void DeleteLogInWindow(::MoleMole::SuperDebug_LogModule categoryKey, ::System::String* logKey)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DELETELOGINWINDOW_OFFSET))(categoryKey, logKey);
		}

		static ::System::Boolean IsSwitchOn(::MoleMole::SuperDebug_LogModule module)
		{
			return ((::System::Boolean(*)(::MoleMole::SuperDebug_LogModule))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_ISSWITCHON_OFFSET))(module);
		}

		static ::System::Int32 GetSwitchFlag(::MoleMole::SuperDebug_LogModule module)
		{
			return ((::System::Int32(*)(::MoleMole::SuperDebug_LogModule))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_GETSWITCHFLAG_OFFSET))(module);
		}

		static ::System::Void SetLogEnabled(::MoleMole::SuperDebug_LogModule module, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_SETLOGENABLED_OFFSET))(module, enabled);
		}

		static ::System::Void ResetLogModuleHelper()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_RESETLOGMODULEHELPER_OFFSET))();
		}

		static ::System::Boolean get_drawDebugLine()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_GET_DRAWDEBUGLINE_OFFSET))();
		}

		static ::System::Void UpdateFrame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_UPDATEFRAME_OFFSET))();
		}

		static ::System::Boolean IsErrorLoggingEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_ISERRORLOGGINGENABLED_OFFSET))();
		}

		static ::System::Boolean IsUseLogWin()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_ISUSELOGWIN_OFFSET))();
		}

		static ::System::Void Log(::System::String* log)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOG_OFFSET))(log);
		}

		static ::System::Void LogFormat(::MoleMole::SuperDebug_LogModule type, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGFORMAT_OFFSET))(type, message, param);
		}

		static ::System::Void LogFormat_1(::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGFORMAT_1_OFFSET))(message, param);
		}

		static ::System::Void Log_1(::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOG_1_OFFSET))(param);
		}

		static ::System::Void LogInfo(::MoleMole::SuperDebug_LogModule type, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGINFO_OFFSET))(type, param);
		}

		static ::System::Void Log_2(::MoleMole::SuperDebug_LogModule type, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOG_2_OFFSET))(type, message, param);
		}

		static ::System::Void LogNavMeshAsync(::System::String* msg, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGNAVMESHASYNC_OFFSET))(msg, param);
		}

		static ::System::Void LogProto(::System::String* log)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGPROTO_OFFSET))(log);
		}

		static ::System::Void LogAllError(::System::String* log)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGALLERROR_OFFSET))(log);
		}

		static ::System::Void LogFile(::MoleMole::SuperDebug_LogModule module, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGFILE_OFFSET))(module, message, param);
		}

		static ::System::Void LogWithObject(::UnityEngine::Object* go, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWITHOBJECT_OFFSET))(go, param);
		}

		static ::System::Void LogWithObject_1(::MoleMole::SuperDebug_LogModule module, ::UnityEngine::Object* go, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWITHOBJECT_1_OFFSET))(module, go, param);
		}

		static ::System::Void LogWithObject_2(::MoleMole::SuperDebug_LogModule module, ::System::String* str, ::UnityEngine::Object* go, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::UnityEngine::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWITHOBJECT_2_OFFSET))(module, str, go, param);
		}

		static ::System::Void LogWarning(::System::String* log)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWARNING_OFFSET))(log);
		}

		static ::System::Void LogWarning_1(::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWARNING_1_OFFSET))(param);
		}

		static ::System::Void LogWarningFormat(::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWARNINGFORMAT_OFFSET))(message, param);
		}

		static ::System::Void LogWarning_2(::MoleMole::SuperDebug_LogModule module, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWARNING_2_OFFSET))(module, message, param);
		}

		static ::System::Void LogWarningWithObject(::UnityEngine::Object* go, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWARNINGWITHOBJECT_OFFSET))(go, param);
		}

		static ::System::Void LogWarningFile(::MoleMole::SuperDebug_LogModule module, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGWARNINGFILE_OFFSET))(module, message, param);
		}

		static ::System::Void LogError(::System::String* log)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERROR_OFFSET))(log);
		}

		static ::System::Void LogError_1(::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERROR_1_OFFSET))(param);
		}

		static ::System::Void LogError_2(::MoleMole::SuperDebug_LogModule module, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERROR_2_OFFSET))(module, message, param);
		}

		static ::System::Void LogErrorFormat(::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERRORFORMAT_OFFSET))(message, param);
		}

		static ::System::Void LogErrorWithObject(::UnityEngine::Object* go, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERRORWITHOBJECT_OFFSET))(go, message, param);
		}

		static ::System::Void LogErrorWithObject_1(::UnityEngine::Object* obj, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::UnityEngine::Object*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERRORWITHOBJECT_1_OFFSET))(obj, param);
		}

		static ::System::Void LogErrorWithObject_2(::MoleMole::SuperDebug_LogModule module, ::UnityEngine::Object* go, ::System::String* log, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGERRORWITHOBJECT_2_OFFSET))(module, go, log, param);
		}

		static ::System::Void LogException(::System::Exception* exception, ::UnityEngine::Object* go)
		{
			return ((::System::Void(*)(::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGEXCEPTION_OFFSET))(exception, go);
		}

		static ::System::Void LogException_1(::MoleMole::SuperDebug_LogModule module, ::System::Exception* exception, ::UnityEngine::Object* go)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGEXCEPTION_1_OFFSET))(module, exception, go);
		}

		static ::System::Void LogAssertion(::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LOGASSERTION_OFFSET))(message, param);
		}

		static ::System::Void _Log(::MoleMole::SuperDebug_LogModule module, ::UnityEngine::Object* go, ::System::String* str, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG__LOG_OFFSET))(module, go, str, param);
		}

		static ::System::Void _LogWarning(::MoleMole::SuperDebug_LogModule module, ::UnityEngine::Object* go, ::System::String* str, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG__LOGWARNING_OFFSET))(module, go, str, param);
		}

		static ::System::Void _LogError(::MoleMole::SuperDebug_LogModule module, ::System::String* log, ::UnityEngine::Object* go)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG__LOGERROR_OFFSET))(module, log, go);
		}

		static ::System::Void _LogException(::MoleMole::SuperDebug_LogModule module, ::System::Exception* exception, ::UnityEngine::Object* go)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::Exception*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG__LOGEXCEPTION_OFFSET))(module, exception, go);
		}

		static ::System::Void _Print(::MoleMole::SuperDebug_LogModule module, ::UnityEngine::LogType type, ::System::String* log, ::UnityEngine::Object* go)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::LogType, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG__PRINT_OFFSET))(module, type, log, go);
		}

		static ::System::String* FormatLogString(::MoleMole::SuperDebug_LogModule module, ::UnityEngine::LogType type, ::System::String* content)
		{
			return ((::System::String*(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::LogType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_FORMATLOGSTRING_OFFSET))(module, type, content);
		}

		static ::System::String* FormatLogString_1(::MoleMole::SuperDebug_LogModule module, ::System::String* content)
		{
			return ((::System::String*(*)(::MoleMole::SuperDebug_LogModule, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_FORMATLOGSTRING_1_OFFSET))(module, content);
		}

		static ::System::Void Assert(::System::Boolean cond, ::System::String* msg, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_ASSERT_OFFSET))(cond, msg, context);
		}

		static ::System::Void AssertThrow(::System::Boolean cond, ::System::String* msg, ::UnityEngine::Object* context)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_ASSERTTHROW_OFFSET))(cond, msg, context);
		}

		static ::System::Void VeryImportantLog(::MoleMole::SuperDebug_LogModule module, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_VERYIMPORTANTLOG_OFFSET))(module, message, param);
		}

		static ::System::Void VeryImportantError(::MoleMole::SuperDebug_LogModule module, ::System::String* message, ::Il2CppArray<::System::Object*>* param)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_VERYIMPORTANTERROR_OFFSET))(module, message, param);
		}

		static ::System::Void VeryImportantError_1(::System::String* msg, ::System::Boolean throwException)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_VERYIMPORTANTERROR_1_OFFSET))(msg, throwException);
		}

		static ::System::Void VeryImportantAssert(::System::Boolean cond, ::System::String* msg)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_VERYIMPORTANTASSERT_OFFSET))(cond, msg);
		}

		static ::System::Void VeryImportantAssert_1(::System::Boolean cond, ::System::Func_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_VERYIMPORTANTASSERT_1_OFFSET))(cond, callback);
		}

		static ::System::Void CloseAllDebugs()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_CLOSEALLDEBUGS_OFFSET))();
		}

		static ::System::Void TimeStart(::System::String* tdebugLabel)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_TIMESTART_OFFSET))(tdebugLabel);
		}

		static ::System::Void TimeEnd()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_TIMEEND_OFFSET))();
		}

		static ::GMDFPBGPJDK* get_Impl()
		{
			return ((::GMDFPBGPJDK*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_GET_IMPL_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_INIT_OFFSET))();
		}

		static ::System::Void InitDebugSwitch()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_INITDEBUGSWITCH_OFFSET))();
		}

		static ::System::Void SetDebugSwitchFlag(::System::Int32 bit, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_SETDEBUGSWITCHFLAG_OFFSET))(bit, value);
		}

		static ::System::Void EnableAllFlag(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_ENABLEALLFLAG_OFFSET))(enable);
		}

		static ::System::Void Dispose()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DISPOSE_OFFSET))();
		}

		static ::System::Void Line(::System::Int32 type, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_LINE_OFFSET))(type, start, end, color, duration, depthTest);
		}

		static ::System::Void DrawLineFromDetect(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::FBHIKNMOHCG debugInfo, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::FBHIKNMOHCG, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWLINEFROMDETECT_OFFSET))(type, start, end, debugInfo, color, duration, depthTest);
		}

		static ::System::Void DrawLine(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWLINE_OFFSET))(type, start, end, color, duration, depthTest);
		}

		static ::System::Void DrawLine_1(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWLINE_1_OFFSET))(start, end, color, duration, depthTest);
		}

		static ::System::Void DrawLineArrow(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWLINEARROW_OFFSET))(type, start, end, color, duration, depthTest);
		}

		static ::System::Void DrawArrow(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWARROW_OFFSET))(type, start, end, color, duration, depthTest);
		}

		static ::System::Void DrawArrow_1(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 dir, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWARROW_1_OFFSET))(start, dir, color);
		}

		static ::System::Void DrawFan(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 centerPoint, ::UnityEngine::Vector3 forward, ::System::Single fanAngle, ::System::Single radius, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Nullable_1<::UnityEngine::Color>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWFAN_OFFSET))(type, centerPoint, forward, fanAngle, radius, color, duration, depthTest);
		}

		static ::System::Void DrawSphere(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 centerPoint, ::System::Single size, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWSPHERE_OFFSET))(type, centerPoint, size, color, duration, depthTest);
		}

		static ::System::Void DrawSphere_1(::UnityEngine::Vector3 centerPoint, ::System::Single size, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWSPHERE_1_OFFSET))(centerPoint, size, color, duration, depthTest);
		}

		static ::System::Void DrawCircle(::UnityEngine::Vector3 centerPoint, ::System::Single size, ::UnityEngine::Color color, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWCIRCLE_OFFSET))(centerPoint, size, color, duration, depthTest);
		}

		static ::System::Void DrawDebugCapsuleFromDetect(::System::Int32 type, ::UnityEngine::Vector3 startpoint, ::UnityEngine::Vector3 endpoint, ::System::Single radius)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWDEBUGCAPSULEFROMDETECT_OFFSET))(type, startpoint, endpoint, radius);
		}

		static ::System::Void DrawDebugCylinderFromDetect(::System::Int32 type, ::UnityEngine::Vector3 startpoint, ::UnityEngine::Vector3 endpoint, ::System::Single radius)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWDEBUGCYLINDERFROMDETECT_OFFSET))(type, startpoint, endpoint, radius);
		}

		static ::System::Void DrawCylinder(::System::Int32 type, ::UnityEngine::Vector3 startpoint, ::UnityEngine::Vector3 endpoint, ::System::Single radius, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWCYLINDER_OFFSET))(type, startpoint, endpoint, radius, color, duration);
		}

		static ::System::Void DrawDebugCapsule(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 startpoint, ::UnityEngine::Vector3 endpoint, ::System::Single radius, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWDEBUGCAPSULE_OFFSET))(type, startpoint, endpoint, radius, color, duration);
		}

		static ::System::Void DrawDebugCapsule_1(::UnityEngine::Vector3 startpoint, ::UnityEngine::Vector3 endpoint, ::System::Single radius, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWDEBUGCAPSULE_1_OFFSET))(startpoint, endpoint, radius, color, duration);
		}

		static ::System::Void DrawDebugCubeFromDetect(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Matrix4x4 matri, ::UnityEngine::Vector3 centerpos, ::UnityEngine::Vector3 extend)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWDEBUGCUBEFROMDETECT_OFFSET))(type, matri, centerpos, extend);
		}

		static ::System::Void DrawDebugCube(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Matrix4x4 matri, ::UnityEngine::Vector3 centerpos, ::UnityEngine::Vector3 extend, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWDEBUGCUBE_OFFSET))(type, matri, centerpos, extend, color, duration);
		}

		static ::System::Void DrawDebugCube_1(::UnityEngine::Matrix4x4 matri, ::UnityEngine::Vector3 centerpos, ::UnityEngine::Vector3 extend, ::UnityEngine::Color color, ::System::Single duration)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWDEBUGCUBE_1_OFFSET))(matri, centerpos, extend, color, duration);
		}

		static ::System::Void DebugPoint(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 position, ::UnityEngine::Color color, ::System::Single scale, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DEBUGPOINT_OFFSET))(type, position, color, scale, duration, depthTest);
		}

		static ::System::Void DebugLocalCube(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Transform* transform, ::UnityEngine::Vector3 size, ::UnityEngine::Color color, ::UnityEngine::Vector3 center, ::System::Single duration, ::System::Boolean depthTest)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Color, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DEBUGLOCALCUBE_OFFSET))(type, transform, size, color, center, duration, depthTest);
		}

		static ::System::Void DrawText(::MoleMole::SuperDebug_LogModule type, ::UnityEngine::Vector3 position, ::System::String* text, ::System::Nullable_1<::UnityEngine::Color> color, ::System::Nullable_1<::System::Int32> fontSize)
		{
			return ((::System::Void(*)(::MoleMole::SuperDebug_LogModule, ::UnityEngine::Vector3, ::System::String*, ::System::Nullable_1<::UnityEngine::Color>, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWTEXT_OFFSET))(type, position, text, color, fontSize);
		}

		static ::UnityEngine::Vector3 TransformByPixel(::UnityEngine::Vector3 position, ::System::Single x, ::System::Single y)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_TRANSFORMBYPIXEL_OFFSET))(position, x, y);
		}

		static ::UnityEngine::Vector3 TransformByPixel_1(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 translateBy)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_TRANSFORMBYPIXEL_1_OFFSET))(position, translateBy);
		}

		static ::System::Void __Print_g__DebugLog_80_0()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG___PRINT_G__DEBUGLOG_80_0_OFFSET))();
		}

		static ::System::Void __Print_g__DebugLogWarning_80_1()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG___PRINT_G__DEBUGLOGWARNING_80_1_OFFSET))();
		}

		static ::System::Void _InitDebugSwitch_g__SetDebugSwitch_101_0(::System::Int32 startIndex, ::System::String* switchKey)
		{
			return ((::System::Void(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG__INITDEBUGSWITCH_G__SETDEBUGSWITCH_101_0_OFFSET))(startIndex, switchKey);
		}

		static ::System::Void _SetDebugSwitchFlag_g__SavePrefs_102_0(::System::String* switchKey, ::MoleMole::SuperDebug___c__DisplayClass102_0& param_1)
		{
			return ((::System::Void(*)(::System::String*, ::MoleMole::SuperDebug___c__DisplayClass102_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG__SETDEBUGSWITCHFLAG_G__SAVEPREFS_102_0_OFFSET))(switchKey, param_1);
		}
	};
}
